#include <stdio.h>
#include <conio.h>
void main()
{
    char operator;
    int  a, b, sum, sub, mult;
    float div;

    printf("Enter your operator: ");
    scanf("%c", &operator);
    printf("Enter your operands: ");
    scanf("%d %d", &a, &b);
    switch(operator)
    {
        case '+':
                sum = a + b;
                printf("sum = %d", sum);
                break;        
        case '-':
                sub = a - b;
                printf("subtraction = %d", sub);
                break;
        case '*':
                mult = a * b;
                printf("multiplication = %d", mult);
                break;
        case '/':
                div = a / b;
                printf("division = %f", div);
                break;
        default:
                printf("Nothing to calculate here");
    }    getch();
}