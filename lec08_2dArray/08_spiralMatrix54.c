#include <stdio.h>
int main()
{
  int r, c;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int minrow = 0;
  int maxrow = r - 1;
  int mincol = 0;
  int maxcol = c - 1;
  int tne = c * r;
  int count = 0;

  while (count < tne)
  {
    for (int i = mincol; i <= maxcol && count < tne; i++)
    {
      printf("%d ", arr[minrow][i]);
      count++;
    }
    minrow++;
    for (int i = minrow; i <= maxrow && count < tne; i++)
    {
      printf("%d ", arr[i][maxcol]);
      count++;
    }
    maxcol--;
    for (int i = maxcol; i >= mincol && count < tne; i--)
    {
      printf("%d ", arr[maxrow][i]);
      count++;
    }
    maxrow--;
    for (int i = maxrow; i >= minrow && count < tne; i--)
    {
      printf("%d ", arr[i][mincol]);
      count++;
    }
    mincol++;
  }

  return 0;
}