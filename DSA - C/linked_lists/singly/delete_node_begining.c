#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
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

    if (head == 0)
    {
        printf("can't delete");
    }
    else{
        temp = head;
        head = temp -> next;
        free(temp);
    }

       temp = head;

    while (temp != 0)
    {
        printf("data = %d\t", temp -> data);
        temp = temp -> next;
    }
    return 0;
}
