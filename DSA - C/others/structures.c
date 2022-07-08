#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

typedef struct students
{
    int id;
    int age;
    char name[50];
} sts;

void main()
{
    sts s[N];
    int size, i = 0;
    printf("Enter the size of students: ");
    scanf("%d", &size);

    while (i < size)
    {
        printf("Enter students details: ");
        scanf("%d  %d %s", &s[i].id, &s[i].age, &s[i].name);
        printf("\n");
        printf("id = %d age = %d name = %s", s[i].id, s[i].age, s[i].name);
        i++;
        printf("\n");
    }
    printf("\n");
}

