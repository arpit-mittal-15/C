//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main(){
  int n;
  printf("Enter no. of rows: ");
  scanf("%d", &n);

  for(int i =0; i<n; i++){
    for(int j=n-i-2; j>=0; j--){
      printf(" ");
    }
    for(int j=0; j<=i*2; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}