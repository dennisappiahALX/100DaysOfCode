#include <stdio.h>
#include <conio.h>

int main()
{
    int number, multiple;
    int i = 0;
    printf("Enter your number: ");
    scanf("%d", &number);

    while ( i <= 20)
    {
        if (number < 0)
        {
            break;
        }
        int j = number;
        multiple = j * i;
        printf("%d x %d = %d", j,i, multiple);
        i++;
        printf("\n");
    }
    getch();
}