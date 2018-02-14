#include <cstdio>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data)
{
    struct Node* temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printSigles(struct Node* root)
{
    if (root == NULL)
        return;

    if (root != NULL)
    {
        printSigles(root->left);

	if (root->left == NULL && root->right != NULL)
	    printf("%d ", root->right->data);
	if (root->left != NULL && root->right == NULL)
	    printf("%d ", root->left->data);
	printSigles(root->right);
    }

}

int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    
    root->left->left = newNode(4);

    root->right->left = newNode(5);
    root->right->left->right = newNode(6);

    printSigles(root);
    return 0;
}
