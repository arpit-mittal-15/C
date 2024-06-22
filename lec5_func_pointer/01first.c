#include <stdio.h>
#include <math.h>
//LIBRARY Func = In built functions
int add(int a, int b){
  return a+b;
}
int main(){
  int a, b;
  printf("Enter 1st number: ");
  scanf("%d", &a);
  printf("Enter 2nd number: ");
  scanf("%d", &b);
  // int sum = add(a,b);
  int root = sqrt(a);
  printf("The sum of numbers is %d", root);
  return 0;
}