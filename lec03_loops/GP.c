#include <stdio.h>
int main(){
  int start;
  int r;
  int repeat;
  printf("Enter the starting value: ");
  scanf("%d", &start);
  printf("Enter the multiple: ");
  scanf("%d", &r);
  printf("Number of values: ");
  scanf("%d", &repeat);

  for(int i= 0; i<=repeat; i++){
    
    printf("%d ", start);
    start = start*r;
  }
  return 0;
}