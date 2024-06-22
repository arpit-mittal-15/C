#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int prime = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      printf("This number is divisible by %d, hence this is not a prime number.", i);
      prime = 0;
      break;
    }
  }
  if(n == 1) printf("1 is neither prime nor composite");
  else if(prime) printf("This is a prime number");

  return 0;
}