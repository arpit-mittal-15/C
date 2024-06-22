//    1
//   121
//  12321
// 1234321

#include <stdio.h>
int main(){
  int rows;
  printf("Enter number of rows: ");
  scanf("%d", &rows);

  for(int i=1; i<=rows; i++){
    for(int j=rows-i-1; j>=0; j--){
      printf(" ");
    }
    for(int j=1; j<=i; j++){
      printf("%d", j);
    }
    for(int j=1; j<i; j++){
      printf("%d", i-j);
    }
    printf("\n");
  }
  return 0;
}