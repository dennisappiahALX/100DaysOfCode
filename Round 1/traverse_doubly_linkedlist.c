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
    struct node *head, *newnode, *temp;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data\n");
        scanf("%d", &newnode -> data);
        newnode ->next = 0;
        newnode ->prev = 0;

        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp -> next = newnode;
            newnode ->prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("data= %d\t", temp ->data);
        temp = temp -> next;
    }
    return 0;
}