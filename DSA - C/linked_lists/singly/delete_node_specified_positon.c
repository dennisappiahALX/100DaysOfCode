#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp, *nextnode;
    int choice, position, i = 0;
    head = 0;
    //creating linked list
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data\n");
        scanf("%d", &newnode ->data);
        newnode -> next = 0;

        if (head == 0)
        {
            temp = head = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d", &choice);
    }
    printf("Enter position you to delete\n");
    scanf("%d", &position);

    temp = head;
    while (i < position - 1)
    {
        temp = temp -> next;
        i++;
    }
    nextnode = temp -> next;
    temp -> next = nextnode -> next;
    free(nextnode);
//traversing and printing
    temp = head;
    while (temp != 0)
    {
        printf("data = %d\t", temp -> data);
        temp = temp -> next;
    }
    return 0;
}