#include <stdio.h>
int power(int x, int n){
  if(n == 0) return 1;
  int recAns = x * power(x, n-1);
  return recAns;
}
int main(){
  int x;
  printf("Enter the number : ");
  scanf("%d", &x);
  int n;
  printf("Enter power : ");
  scanf("%d", &n);

  int ans = power(x, n);
  printf("%d", ans);
  
  return 0;
}