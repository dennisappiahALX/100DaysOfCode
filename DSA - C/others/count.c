#include <stdio.h>
#include <conio.h>
#define N 50

void main()
{
    int array[N], size;
    int i =0, even = 0, odd =0;
    printf("size of array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    while (i < size)
    {
        scanf("%d", &array[i]);  
        if (array[i] % 2 == 0)
        {
            even++; 
        }
        else
        {
            odd++;
        } 
        i++;
    }
    printf("even count = %d", even);
    printf("\nodd count = %d", odd);
}