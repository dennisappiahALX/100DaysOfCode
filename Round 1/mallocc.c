#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;

    printf("Enter number of values:\n");
    scanf("%d", &n);
    //memory allocation
    ptr = (int*)malloc(n * sizeof(int));

    printf("Enter values:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    //
    printf("Entered values\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);
    return 0;
}

