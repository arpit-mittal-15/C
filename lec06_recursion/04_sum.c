#include <stdio.h>
int sum(int n){
  int total = n;

  if(n==0) return 0;
  total = n + sum(n-1);
  return total;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int result = sum(n);

  printf("%d", result);

  return 0;
}