#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int choice, count = 0, position, i;
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
    
    printf("Traversing\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
        count++;
    }
    printf("\n");
    printf("count = %d\n", count);

    printf("Enter position to insert node\n");
    scanf("%d", &position);

    if (position > count)
    {
        printf("can't insert node here");
    }
    else
     {
        temp = head;
        while (i < position)
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
    //printing & traversing

    temp = head;
    while ( temp !=0)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
    }
    return 0; 
}
