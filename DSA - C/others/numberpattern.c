#include <stdio.h>
// 1        //12345         
// 12       //1234
// 123      //123
// 1234     //12
// 12345    //1
int main()
{
  for ( int y = 1; y <= 5; y++)
  {
    for (int z =1 ; z <= y; z++)
    {
        printf("%d", z);
    }
    printf("\n");
  }
  printf("\n");

  for ( int j = 1; j <= 5; j++)
  {
    for (int i=5 ; i >= j; i--)
    {
        printf("%d", i);
    }
    printf("\n");
  }
  
  return 0;
}
