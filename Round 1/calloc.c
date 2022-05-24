#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *mem;
    int i = 0;
    printf("Number of values to stored: ");
    scanf("%d", &n);
    //memory allocation
    mem = (int *)calloc(n, sizeof(int));

    printf("enter values:\n");
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &mem[i]);
    }
    for ( int i = 0; i < n; i++)
    {
        printf("%d", mem[i]);
    }
    return 0;
}