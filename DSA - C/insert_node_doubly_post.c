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
    struct node *head, *temp, *newnode;
    int choice, position, i = 1, count = 0;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter node data\n");
        scanf("%d",&newnode -> data);
        newnode -> next = 0;
        newnode -> prev = 0;

        if (head == 0)
        {
            temp = head = newnode;
        }
        else{
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
//count of nodes in doubly linked list
    temp = head;
    while (temp != 0)
    {
        printf("data = %d\n", temp -> data);
        temp = temp -> next;
        count++;
    }
    printf("count = %d\n", count);
//position to insert
    printf("enter position to insert\n");
    scanf("%d", &position);
    if (position <= 0 ||  position > count)
    {
        printf("can't insert node");
    }
    else   
    {
        temp = head;
        while (i < position - 1)
        {
            temp = temp -> next;
            i++;
        }
//inserting node
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data to insert\n");
        scanf("%d", &newnode ->data);

       newnode -> prev = temp;
       newnode -> next = temp -> next;
       temp -> next = newnode;
    }
//Traversing & printing node data
    temp = head;
    while(temp != 0)
    {
        printf("data = %d\t", temp -> data);
        temp = temp -> next;
    }

    return 0;
}