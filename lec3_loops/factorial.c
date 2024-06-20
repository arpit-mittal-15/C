#include <stdio.h>
int main()
{
  int n;
  int f=1;
  printf("Enter a number: ");
  scanf("%d", &n);

  for(int i = 1; i<=n; i++){
    f=f*i;
    printf("Factorial of %d is %d\n", i, f);
  }
  if(n == 0) printf("Factorial of 0 is 1");
  // while (n > 0)
  // {
  //   f= f*n;
  //   n--;
  // }
  // printf("The factorial of number is %d", f);
  return 0;
}