#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int top = -1; int stack[SIZE];

int push()
{
    int element;
    printf("stack element\n");
    scanf("%d", &element);

    if (top == SIZE - 1)
    {
        printf("overflow condition - can't push");
    }
    else
    {
        top++;                     
        stack[top] = element;
    }
    return 0;
}

int pop()
{  
    // int pop_element;
    if (top == -1)
    {
        printf("under flow condition");
    }
    else
    {
        // pop_element = stack[top];
        top--;
    }
    // printf("%d\n", pop_element);
    return 0;
}

int peek()
{  
    int top_element;
    if (top == -1)
    {
        printf("under flow condition");
    }
    else
    {
        top_element = stack[top];
    }
    printf("top_element = %d\n", top_element);
    return 0;
}

int display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("elements = %d\n", stack[i]);
    }
}


int main()
{
    push();
    push();
    push();
    pop();
    peek();
    display();
    return 0;
}