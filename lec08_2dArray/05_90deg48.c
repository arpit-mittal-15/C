#include <stdio.h>
int main(){
  int r,c;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);

  int arr[r][c];
  int turned[c][r];

  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i=c-1; i>=0; i--){
    for(int j=r-1; j>=0; j--){
      turned[i][j] = arr[r-j-1][i];
    }
  }

  for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
      printf("%d ", turned[i][j]);
    }
    printf("\n");
  }

  return 0;
}