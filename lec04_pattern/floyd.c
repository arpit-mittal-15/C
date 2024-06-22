// 1
//  2  3
//  4  5  6
//  7  8  9  10

#include <stdio.h>
int main()
{
  int n = 1;
  int row;
  printf("Enter a number: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" %d ", n);
      n++;
    }
    printf("\n");
  }
  return 0;
}