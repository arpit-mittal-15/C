#include <stdio.h>
int maze(int m, int n, int x, int y){
  if(m-x == 0 && n-y == 0) return 1;
  int ways = 0;
  if(m-x != 0) ways += maze(m, n, x+1, y);
  if(n-y != 0) ways += maze(m,n,x,y+1);
  return ways;
}
int main(){
  int m,n;
  printf("Enter columns: ");
  scanf("%d", &m);
  printf("Enter rows: ");
  scanf("%d", &n);

  printf("%d", maze(m,n,1,1));

  return 0;
}