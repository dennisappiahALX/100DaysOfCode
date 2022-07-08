#include <stdio.h>
#include <stdlib.h>

int main()
{   struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *prevnode, *temp;
    int choice;
    head = 0;
    //creating linkedlist
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter nodes data\n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;

        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
           temp -> next = newnode;
           temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    //Delete node from end of linkedlist
    temp = head;
    while(temp ->next != 0)
    {
        prevnode = temp;
        temp = temp -> next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode -> next = 0;
    }
    free(temp);
    
    //Traversing & Printing node data
    temp = head;

    while (temp != 0)
    {
        printf("data = %d\t", temp -> data);
        temp = temp -> next;
    }
   
    return 0;
}