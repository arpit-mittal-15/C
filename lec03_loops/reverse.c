#include <stdio.h>
int main(){
  int number, reverse = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  while(number > 0){
    reverse = reverse*10;
    reverse = reverse + (number%10);
    number = number/10;
  }
  printf("Reverse of your number is: %d", reverse);
  return 0;
}