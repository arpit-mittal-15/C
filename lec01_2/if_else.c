#include <stdio.h>
int main()
{

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  // if (n%2 == 0)  // For Odd-Even
  // {
  //   printf("Even number");
  // }
  // else{
  //   printf("Odd number");
  // }

  // if(n > 99 && n < 1000)  // For 3 digit number
  // {
  //   printf("This is a 3 digit number");
  // }
  // else{
  //   printf("This is not a 3 digit number");
  // }

  if (n % 5 == 0 || n % 3 == 0) // Divisible by 5 or 3
  {
    if (n % 5 == 0)
    {
      printf("This number is divisible by 5");
    }
    else
    {
      printf("This number is divisible by 3");
    }
  }
  else
  {
    printf("This is neither divisible by 5 or 3");
  }
  return 0;
}