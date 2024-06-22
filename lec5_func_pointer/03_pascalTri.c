#include <stdio.h>
int factorial(int n){
  int factor = 1;
  while(n>=1){
    factor = factor * n;
    n--;
  }
  return factor;
};

int combination(int n, int r){
  int ncr = factorial(n)/(factorial(r)*factorial(n-r));
  return ncr;
};

int main(){
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    for(int j=n-i-1; j>0; j--){
      printf(" ");
    }
    for(int j=0; j<=i; j++){
      printf("%d ", combination(i,j));
    }
    printf("\n");
  }
  return 0;
}