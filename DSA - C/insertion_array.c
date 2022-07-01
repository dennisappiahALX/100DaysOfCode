#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50],size;
    int number, position;
    printf("Enter size\n");
    scanf("%d", &size);

    for (int i=0; i < size;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number to insert\n");
    scanf("%d", &number);
    printf("Enter position of number\n");
    scanf("%d", &position);
    if (position < 0 || position > size + 1)
    {
        printf("can't insert");
    }
    else
    {
    for (int i = size - 1; i >= position-1; i--)
    {
      a[i+1] = a[i];
    }
    a[position-1] = number;
    size++;

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    }
}