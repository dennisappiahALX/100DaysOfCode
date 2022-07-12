#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

int enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
    return 0;
}

int display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        temp = front;
        while(temp != 0)
        {
            printf("elements = %d\n", temp -> data);
            temp = temp -> next;
        }
    }
    return 0;
}

int dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("list is empty\n");
    }
    else{
        front = front -> next;
        free(temp);
    }

}
int peek()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("list is empty\n");
    }
    else
    {
       printf("top data = %d\n", front -> data);
    }
    return 0;
}

int main()
{
    enqueue(100);
    enqueue(50);
    enqueue(80);
    enqueue(25);
    enqueue(10);
    dequeue();
    dequeue();
    peek();
    display();
}