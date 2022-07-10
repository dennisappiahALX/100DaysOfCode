#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

void push(int element)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode ->data = element;
    newnode -> next = top;
    top = newnode;
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("overflow condition\n");
    }
    else{
        printf("pop data = %d\n", top -> data);
        top = top -> next;
        free(temp);
    }
}

void peep()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("overflow condition\n");
    }
    else{
        printf("top data = %d\n", top -> data);
    }
}

void display()
{
    struct node *temp;
    if (top == 0)
    {
        printf("overflow condition\n");
    }
    else{
        temp = top;
        while(temp != 0)
        {
            printf("elements = %d\n", temp -> data );
            temp = temp -> next;
        }
    }
}

void main()
{
    push(2);
    push(4);
    push(100);
    push(45);
    pop();
    peep();
    display();

}