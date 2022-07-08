#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head , *newnode, *temp;int choice;
    //in case of no nodes
    head = 0;
    //creating new nodes
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the node data:\n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter number at the begining of the node\n");
    scanf("%d", &newnode -> data);
    newnode -> next = head;
    head = newnode;

    printf("Traversing\n");
    temp = head;
    while(temp != 0)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
    }
    
    return 0;
}
