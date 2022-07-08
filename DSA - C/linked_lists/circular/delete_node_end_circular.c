#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *tail,*temp, *newnode, *prevnode;
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
            head = tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            tail = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
      tail -> next = head;
//deleting node at end
    tail = head;
    while (tail->next != head)
    {
        prevnode = tail;
        tail = tail -> next;
    }
    prevnode -> next = head;
    free(tail);

//printing and traversing
    tail = head;
    while (tail->next != head)
    {
        printf("data= %d\n", tail -> data);
        tail = tail -> next;
    }
    printf("data= %d\n", tail -> data);

    return 0;
}
