#include <stdio.h>
#include <stdlib.h>
//creation of doubly linked list
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head, *tail, *newnode, *currentnode, *nextnode;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter node data\n");
        scanf("%d", &newnode -> data);
        newnode ->next = 0;
        newnode -> prev = 0;

        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            newnode -> prev = tail;
            tail = newnode;
        }

        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    
   //Reversing linked list
        currentnode = head;
        while (currentnode != 0)
        {
            nextnode = currentnode -> next;
            currentnode -> next = currentnode -> prev;
            currentnode -> prev = nextnode;
            currentnode = nextnode;
        }
        head = currentnode;
        head = tail;
        tail = currentnode;

//After reverse
    currentnode = head;
    //Traversing & printing
    while (currentnode != 0)
    {
        printf("Reversed data = %d\n", currentnode -> data);
        currentnode = currentnode -> next;
    }
    return 0;
}
