#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int front = -1; int rear = -1; 
int queue[SIZE];

void enqueue(int x)
{
    if (rear == SIZE - 1)
    {
        printf("over condition");
    }
    else if (front == -1 & rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 & rear == -1)
    {
        printf("underflow condition");
    }
    else if ( front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d\n", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 & rear == -1)
    {
        printf("underflow condition");
    }
    else{
        printf("top data = %d\n", queue[front]);
    }
}

void display()
{
    for (int i = front; i < rear + 1; i++)
    {
        printf("elements = %d\n", queue[i]);
    }
}

void main()
{
    enqueue(5);
    enqueue(7);
    enqueue(50);
    enqueue(20);
    dequeue();
    peek();
    display();

}