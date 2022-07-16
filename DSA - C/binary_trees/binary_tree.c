#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

struct node * create()
{
    struct node *newnode; int element;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data(-1 for no node):\n");
    scanf("%d", &element);
    if (element == -1)  //termination condition
    {
        return 0;
    }
    newnode -> data = element;

    printf("left child of %d\n", element);
    newnode -> left = create();

    printf("right child of %d\n", element);
    newnode -> right = create();

    return newnode;
}

void preorder_traverse(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    printf("data = %d\n", root -> data);
    preorder_traverse(root -> left);
    preorder_traverse(root -> right);
}

void main()
{
    struct node *root;
    root = 0;
    root = create();

    printf("Preorder traverse: \n");
    preorder_traverse(root);
}