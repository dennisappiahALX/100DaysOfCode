#include <stdio.h>
#include <conio.h>

void fun(int *, int *);


void fun(int *x, int *y)
{
    *x = 12;
    *y = 14;
}
 
void main()
{
    int x =5,y=7;
    fun(&x,&y);
    printf("x= %d y = %d", x, y);
}