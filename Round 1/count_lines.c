#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    char content;
    int count_line = 1;
    fp = fopen("demo.txt", "r");

    if (fp == NULL)
    {
        printf("Error: NO file");
        exit(1);
    }
    while (!(feof(fp)))
    {
        content = fgetc(fp);
        // printf("%c", content);
        if (content == '\n')
        {
            count_line++;
        }
    }
    printf("%d", count_line);
}
