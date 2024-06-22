//        *       
//        *       
//  *  *  *  *  * 
//        *       
//        *       

#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      int half = n / 2 + 1;
      if (i == half || j == half)
        printf(" * ");
      else
        printf("   ");
    }
    printf("\n");
  }
  return 0;
}