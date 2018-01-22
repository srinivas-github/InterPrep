#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};

struct MyQueue
{
    struct Node* stack1;
    struct Node* stack2;
};

void push(struct Node** top_ref, int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = (*top_ref);
    (*top_ref) = temp;
}

int pop(struct Node** top_ref)
{
    int res;
    struct Node* top;
    if (*top_ref == NULL)
    {
        printf("Stack overflow\n");
        return -1;
    }
    else
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

void enQueue(struct MyQueue* q, int x)
{
     push(&q->stack1, x);
}

int deQueue(struct MyQueue* q)
{
    int x;
    
    if (q->stack1 == NULL && q->stack2 == NULL)
    {
        printf("Queue is epty\n");
        return -1;
    }
    
    if ( q->stack2 == NULL)
    {
        while ( q->stack1 != NULL)
        {
            x = pop(&q->stack1);
            push(&q->stack2, x);
        }
    }
    
    x = pop(&q->stack2);
    return x;
}

int main()
{
    struct MyQueue* q = (struct MyQueue*)malloc(sizeof(struct MyQueue));
    q->stack1 = q->stack2 = NULL;
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    
    printf("%d", deQueue(q));
    printf("%d", deQueue(q));
    printf("%d", deQueue(q));
    return 0;
}
