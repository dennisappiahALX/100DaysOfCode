#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fp = NULL;
    char ch;

    fp = fopen("demo.txt", "r");
    if (fp == NULL)
    {
        printf("No file");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(fp);
}