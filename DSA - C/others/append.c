#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char str[50];
    fp = fopen("demo.txt", "a");

    if (fp == NULL)
    {
        printf("No file");
        exit(1);
    }
    printf("Enter your appended text: \n");
    gets(str);

    fputs(str, fp);
    fclose(fp);    
}