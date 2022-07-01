#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    int age;
    char first_name[20];
    char last_name[20];
} empl;
int main()
{
    int i = 0, n;
    empl *ptr ;
    // empl employee_1 = {10, "Kweku", "Kojo"};
    printf("Enter number of employees: \n");
    scanf("%d", &n);
    //Memory allocation with malloc
    ptr = (empl *)malloc(n * sizeof(empl));
    printf("Enter employee details: \n");
    for(int i = 0; i < n; i++)
    {
        // scanf("%d %s %s", (ptr+i),(ptr+i),(ptr+i));
        scanf("%d %s %s", &ptr[i].age, &ptr[i].first_name, &ptr[i].last_name);   
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %s\n", ptr[i].age, ptr[i].first_name, ptr[i].last_name);
    }
    free(ptr);
    return 0;
}