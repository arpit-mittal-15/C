#include <stdio.h>
int main()
{
  int a = 0, b = 1;
  int f = 0;
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {

    a = b;
    b = f;
    f = a + b;
    printf("%d ", f);
  }
  return 0;
}