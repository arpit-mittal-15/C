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

  int sr, sc;
  int er, ec;

  printf("Enter starting coordinate: ");
  scanf("%d %d", &sr, &sc);
  printf("Enter ending coordinate: ");
  scanf("%d %d", &er, &ec);

  for(int i=sr-1; i<er; i++){
    for(int j=sc-1; j<ec; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}