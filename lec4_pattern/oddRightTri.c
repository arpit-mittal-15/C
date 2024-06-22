// 1
// 13
// 135
// 1357

#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i*2; j+=2)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}