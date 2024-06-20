#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    printf("%d) Hello world\n", i);

    // if (i % 2 == 0)  //printing even number using IF
    // {
    //   printf("%d\n", i);
    // }
  }
  return 0;
}