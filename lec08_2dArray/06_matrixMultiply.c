#include <stdio.h>
int main(){
  int r1,c1,r2,c2;
  printf("Enter number of rows & columns of first matrix: ");
  scanf("%d %d", &r1, &c1);
  printf("Enter number of rows & columns of second matrix: ");
  scanf("%d %d", &r2, &c2);

  if(c1 != r2){
    printf("They cannot be multiplied.");
    return 0;
  }

  int arr[r1][c1];
  int brr[r2][c2];
  int multiple[r1][c2];

  printf("Enter first matrix: \n");

  for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Enter second matrix: \n");

  for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
      scanf("%d", &brr[i][j]);
    }
  }

  for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
      int sum=0;
      for(int k=0; k<c1; k++){
        sum = sum + (arr[i][k]*brr[k][j]);
      }
      multiple[i][j] = sum;
    }
  }

  for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
      printf("%d ", multiple[i][j]);
    }
    printf("\n");
  }

  return 0;
}