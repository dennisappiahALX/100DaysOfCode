#include <stdio.h>
#include <stdlib.h>
//creating singly linked list
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode , *prevnode, *nextnode, *currentnode;
    int choice;
    head = 0; 
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter your node data\n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;

        if (head == 0)
        {
            head = currentnode = newnode;
        }
        else{
            currentnode -> next = newnode;
            currentnode = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    currentnode -> next = head;

// //Reversing linked list
    prevnode = 0; 
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = currentnode -> next;
        currentnode ->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode -> next;
    
//After reverse
    currentnode = head;
    //Traversing & printing
    while (currentnode -> next != head)
    {
        printf("Reversed data = %d\n", currentnode -> data);
        currentnode = currentnode -> next;
    }
    printf("Reversed data = %d\n", currentnode -> data);

    return 0;
}