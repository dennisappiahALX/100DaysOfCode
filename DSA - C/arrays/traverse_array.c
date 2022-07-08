#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50], size;
    printf("Enter the size\n");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("print the elements\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}