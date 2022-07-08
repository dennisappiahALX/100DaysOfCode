#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int choice, count = 0, position, i = 1;
    head = 0;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter linked list nodes\n");
        scanf("%d", &newnode ->data);
        newnode -> next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    temp -> next = head;
//count of nodes
    temp = head;
    while (temp-> next  != head)
    {
        temp = temp -> next;
        count++;
    }
    count++;
    printf("count = %d\n", count);

    printf("Enter position to insert node\n");
    scanf("%d", &position);

    if (position <= 0 && position > count)
    {
        printf("can't insert node here");
    }
    else
     {
        temp = head;
        while (i < position - 1)
        {
            temp = temp ->next;
            i++;
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter node data\n");
        scanf("%d", &newnode -> data);
        newnode -> next = temp -> next;
        temp ->next = newnode;
    }
//traversing & printing node data
    temp = head;
    while ( temp -> next != head)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
    }
    printf("%d\t", temp -> data);
    return 0; 
}
