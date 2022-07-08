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

//which file were y
//I was using the virtual machine - ubuntu

//But we can do it here