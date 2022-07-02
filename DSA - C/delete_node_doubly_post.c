#include <stdio.h>
#include <stdlib.h>
//creating doubly linked list
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head, *newnode , *temp;
    int choice, position, i = 1, count = 0;
    head = 0;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter your node data\n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        newnode -> prev = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else{
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    if (head == 0)
    {
        printf("can't delete\n");
    }
    else{
//deleting node from position
        printf("enter position to delete\n");
        scanf("%d", &position);

        temp = head;
        while ( i < position)
        {
            temp = temp -> next;
            i++;
        }

        temp -> prev ->next = temp -> next;
        temp -> next-> prev = temp -> prev;
        free(temp);
    } 
//Traversing & printing nodes

   temp = head;
    //Traversing & printing
    while (temp != 0)
    {
        printf("data = %d\t", temp -> data);
        temp = temp -> next;
    }
    return 0;
}