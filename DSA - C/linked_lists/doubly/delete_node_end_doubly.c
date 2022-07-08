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
    struct node *head, *tail , *newnode, *temp;
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
            tail = head = newnode;
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
// //Deleting node at end
    if (tail == 0)
    {
        printf("can't delete- list is empty");
    }
    else{
      temp = tail;
      tail = temp -> prev;
      tail ->next = 0;
      free(temp);
    }

    tail = head;
    //Traversing & printing
    while (tail != 0)
    {
        printf("data = %d\t", tail -> data);
        tail = tail -> next;
    }
    return 0;

}
