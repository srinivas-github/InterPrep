#include <iosteram>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void leftViewUtil(struct Node* root, int level, int *max_level)
{
    if (root == NULL)
        return ;
    if ( *max_level < level )
    {
        printf("%d ", root->data);
	*max_level = level;
    }

    leftViewUtil(root->left, level+1, max_level);
    leftViewUtil(root->right,level+1, max_level);
}

void leftView(struct Node* root)
{
    int max_level = 0;
    leftViewUtil(root, 1, &max_level);

}
