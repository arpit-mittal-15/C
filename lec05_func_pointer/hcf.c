#include <stdio.h>
int min(int a, int b){
  int minimum = a;
  if(a<b) minimum = b;
  return minimum;
}
int hcf(int a, int b){
  int max;
  for(int i=min(a,b); i>=1; i--){
    if(a%i==0 && b%i == 0){
      max = i;
      break;
    }
  }
  return max;
}
int main(){
  int a,b;
  printf("Enter 1st number: ");
  scanf("%d", &a);
  printf("Enter 2nd number: ");
  scanf("%d", &b);

  printf("HCF of the two numbers is %d", hcf(a,b));

  return 0;
}