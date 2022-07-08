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
    struct node *head, *newnode ,*temp, *tail;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter nodes data\n");
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
     tail -> next = head;

//deleting at the end
    if (tail == 0)
    {
        printf("can't delete\n");
    }
    else{
      temp = tail;
      tail = temp -> prev;
      tail -> next = head;
      free(temp);
    }
//traversing & printing values

    tail = head;
    while (tail->next != head)
    {
        printf("data= %d\n", tail -> data);
        tail = tail -> next;
    }
    printf("data= %d\n", tail -> data);
} 