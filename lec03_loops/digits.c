#include <stdio.h>
int main(){
  int number;
  int digit = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  while(number > 0){
    digit++;
    number = number/10;
  }
  printf("%d", digit);
  return 0;
}