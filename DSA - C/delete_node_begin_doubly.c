#include <stdio.h>
#include <stdlib.h>
//creating of linked list
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head, *temp , *newnode;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data:\n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        newnode -> prev = 0;

        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
        }

        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
//Deleting node at beginning
    if (head == 0)
    {
        printf("can't delete");
    }
    else{
        temp = head;
        head = temp -> next;
        head -> prev = 0;
        free(temp);
    }

    temp = head;
    //Traversing & printing
    while (temp != 0)
    {
        printf("data = %d\t", temp -> data);
        temp = temp -> next;
    }
    return 0;

}