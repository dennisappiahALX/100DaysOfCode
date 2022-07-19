#include <stdio.h>
#include <stdlib.h>
#define N 50

void linear_search()
{
    int arr[N], i = 0, size, data = 23;
    printf("Enter size of the array:\n");
    scanf("%d", &size);

    printf("enter array elements:\n");
   while (i < size)
   {
        scanf("%d", &arr[i]);
        if (arr[i] == data)
        {
            printf("Found! at %d\n", i);
            break;
        }
        i++;
   }
   if (i == size)
   {
    printf("Element not found!");
   }
}

int main()
{
    linear_search();
}