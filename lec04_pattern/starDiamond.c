//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
#include <stdio.h>
int main()
{
  int n, nst, nsp;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 0; i < (n * 2) - 1; i++)
  {
    if (i < n)
    {
      for (int j = n - i - 1; j > 0; j--)
      {
        printf(" ");
      }
      for (int j = 0; j < (i * 2) + 1; j++)
      {
        printf("*");
      }
    }
    else{
      for (int j = 1; j < i-n+2; j++)
      {
        printf(" ");
      }
      for (int j = (n*2-i-1)*2-1; j > 0 ; j--)
      {
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}