#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *temp,*newnode;
    int choice;

    head = 0;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\n");
        printf("Enter data\n");
        scanf("%d", &newnode -> data);
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
        printf("Do you want (0,1)?\n");
        scanf("%d", &choice);
        printf("Traversing\n");
        temp = head;
        while(temp != 0)
        {
            printf("data = %d", temp -> data);
            temp = temp -> next;
        }
        getch();
    }
   
    return 0;
}