#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head, *newnode, *tail;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter your node data\n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
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
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data\n");
    scanf("%d", &newnode -> data);
    newnode -> next = 0;
    tail -> next = newnode;
    newnode -> prev = tail;
    tail = newnode;
    
    //Traversing & printing
    tail = head;
    while(tail != 0)
    {
        printf("data = %d\t", tail -> data);
        tail = tail -> next;
    }
    return 0;
}
