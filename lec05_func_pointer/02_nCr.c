#include <stdio.h>
int factorial(int n){
  int factor = 1;
  while(n>=1){
    factor = factor * n;
    n--;
  }
  return factor;
}
int main(){
  int n,r;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter r: ");
  scanf("%d", &r);

  int ncr = factorial(n)/(factorial(r)*factorial(n-r));

  printf("Possible number of combinations are %d", ncr);
  return 0;
}