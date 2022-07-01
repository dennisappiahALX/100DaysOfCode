#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fp = NULL;
    char str[50] = {"Hello Dennis, How are you doing?"};
    int a = 60;

    fp = fopen("demo.txt", "w");
    if (fp == NULL)
    {
        printf("No file");
        exit(1);
    }

    // fputs(str, fp);
    fprintf(fp, "%s %d", str, a);
    
    fclose(fp);
    return 0;
}




