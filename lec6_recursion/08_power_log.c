#include <stdio.h>
int power(int x, int n){
  if(n==0) return 1;
  int a = power(x, n/2);
  if(n%2==0) return a*a;
  else return a*a*x;
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