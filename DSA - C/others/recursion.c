#include <stdio.h>
#include <conio.h>

int reversal(int);

int reversal(int n)
{
    if (n < 1) return;
    else
    {
        printf("%d\n",n);
        reversal(n-1);
        printf("%d\n", n);
    }
}
void main()
{
    int a = 10;
    reversal(a);
}
