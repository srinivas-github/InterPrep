#include <cstdio>

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** headRef, int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = (*headRef);
    (*headRef) = temp;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    for(; temp != NULL; temp = temp->next)
        printf("[%d]->", temp->data);
    printf("[NULL]\n");
}

void frontBackSplit(struct Node* head, struct Node** fronttRef, struct Node** backRef)
{
    struct Node* fast;
    struct Node* slow;

    if ( head == NULL || head->next == NULL)
    {
        *fronttRef = head;
	*backRef = NULL;
    }
    else
    {
        slow = head;
	fast = head->next;
	while (fast != NULL)
	{
	    fast = fast->next;
	    if (fast != NULL)
	    {
	        slow = slow->next;
		fast = fast->next;
	    }
	}
	*fronttRef = head;
	*backRef = slow->next;
	slow->next = NULL;
    }
}

void reverse(struct Node** headRef)
{
    struct Node* current = (*headRef);
    struct Node* prev = NULL;
    struct Node* next;

    while (current != NULL)
    {
        next = current->next;
	current->next = prev;
	prev = current;
	current = next;
    }
    (*headRef) = prev;
}

void ModifyFirsthalf(struct Node* first, struct Node* second)
{
    while ( second != NULL)
    {
        first->data = (first->data - second->data);
	first = first->next;
	second = second->next;
    }
}

struct Node* concatList(struct Node* first, struct Node* second)
{
    struct Node* head = first;

    while ( first->next != NULL)
    {
        first = first->next;
    }
    first->next = second;
    return head;
}

struct Node* ModifyTheList(struct Node* head)
{
    if ( head == NULL || head->next == NULL)
        return head;

    struct Node* firstHalf, *secondHalf;
    
    frontBackSplit(head, &firstHalf, &secondHalf);

    reverse(&secondHalf);

    ModifyFirsthalf(firstHalf, secondHalf);

    head = concatList(firstHalf, secondHalf);

    return head;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 14);
    push(&head, 12);
    push(&head, 10);
    push(&head, 8);
    push(&head, 6);
    push(&head, 4);
    push(&head, 6);
    push(&head, 8);
    push(&head, 10);
    push(&head, 12);
    push(&head, 14);
    push(&head, 16);
    push(&head, 18);

    head = ModifyTheList(head);
    printList(head);
    return 0;
}

