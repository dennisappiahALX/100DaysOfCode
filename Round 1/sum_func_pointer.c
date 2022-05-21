#include <stdio.h>
#include <conio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{
    int sum;

    sum = *a + *b;
    return sum;
}

void main()
{
    int add;
    int x=5, y=10;

    add = sum(&x, &y);
    printf("addition = %d", add);
}
