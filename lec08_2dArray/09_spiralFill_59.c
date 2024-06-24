#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int arr[n][n];

  int minrow = 0;
  int maxrow = n-1;
  int mincol = 0;
  int maxcol = n-1;
  int count = 1;
  int tne = n*n;

  while (count <= tne)
  {
    for (int i = mincol; i <= maxcol && count <= tne; i++)
    {
      arr[minrow][i] = count;
      count++;
    }
    minrow++;
    for (int i = minrow; i <= maxrow && count <= tne; i++)
    {
      arr[i][maxcol] = count;
      count++;
    }
    maxcol--;
    for (int i = maxcol; i >= mincol && count <= tne; i--)
    {
      arr[maxrow][i] = count;
      count++;
    }
    maxrow--;
    for (int i = maxrow; i >= minrow && count <= tne; i--)
    {
      arr[i][mincol] = count;
      count++;
    }
    mincol++;
  }

  printf("%d\n", count);

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}