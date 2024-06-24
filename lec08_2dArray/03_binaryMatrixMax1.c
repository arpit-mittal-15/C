#include <stdio.h>
int main(){
  int r,c;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);

  int arr[r][c];

  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  int maxOnes = 0;
  int maxOnesRow = 0;

  for(int i=0; i<r; i++){
    int ones = 0;
    for(int j=0; j<c; j++){
      if(arr[i][j] == 1){
        ones++;
      }
    }
    if(ones > maxOnes){
      maxOnes = ones;
      maxOnesRow = i;
    }
  }
  printf("%d", maxOnesRow);
  return 0;
}