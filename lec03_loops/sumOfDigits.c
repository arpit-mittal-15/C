#include <stdio.h>
int main(){
  int number;
  int sum = 0;
  printf("Enter a number: ");
  scanf("%d", &number);

  while(number > 0){
    int digit = number%10;
    sum = sum + digit;
    number = number/10;
  }
  printf("Sum of the digits is: %d", sum);
  return 0;
}