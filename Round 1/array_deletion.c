#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50], size, number, position;
    printf("Enter the size of array\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
   printf("Enter your position\n");
   scanf("%d", &position);
   if(position <= 0 || position > size)
   {
       printf("Can't delete");
   }
    for (int i = position - 1; i < size-1; i++)
    {
        a[i] = a[i+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}