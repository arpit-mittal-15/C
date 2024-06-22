#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    for(int j=n-i; j>0; j--){
      printf("*");
    }
    for(int j=0; j<(i*2)-1; j++){
      printf(" ");
    }
    for(int j=n-i; j>0; j--){
      if(j==n) j--;
      printf("*");
    }
    printf("\n");
  }
  return 0;
}