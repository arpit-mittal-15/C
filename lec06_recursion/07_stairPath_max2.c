#include <stdio.h>
int steps(int n){
  if(n<=2) return n;
  int totalWays = steps(n-1) + steps(n-2);
  return totalWays;
}
int main(){
  int n;
  printf("Enter number of stairs: ");
  scanf("%d", &n);

  printf("Number of ways: %d", steps(n));

  return 0;
}