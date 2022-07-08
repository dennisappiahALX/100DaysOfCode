#include <stdio.h>
// * * * * *       *
// * * * *         *  *
// * * *           *   *  *
// * *             *   *   *  *
// *               *   *    *   *  *
//First Pattern
int main()
{
    for ( int j = 1; j <= 5; j++)
    {
       for ( int i = 5; j <= i; i-- )
       {
        printf("*");
       }
         printf("\n");
    }
 printf("\n");
 //second pattern
  for ( int y = 1; y <= 5; y++)
  {
    for (int z =1 ; z <= y; z++)
    {
        printf("*");
    }
    printf("\n");
  }
  printf("\n");
    return 0;
}

