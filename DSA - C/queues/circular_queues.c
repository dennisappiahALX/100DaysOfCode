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
    else{
        rear -> next = newnode;
        rear = newnode;
    }
    rear ->next = front;

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
    else
    {
        front = front -> next;
    }
    return 0;
}

int peek()
{
    if (front == 0 && rear == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("top element = %d\n", front -> data);
    }
    return 0;
}

int display()
{
    if (front == 0 && rear == 0)
    {
        printf("list is empty\n");
    }
    else
    {
        rear = front;
        while (rear-> next != front)
        {
            printf("elements = %d\n", rear -> data);
            rear = rear -> next;
        }
          printf("elements = %d\n", rear -> data);
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