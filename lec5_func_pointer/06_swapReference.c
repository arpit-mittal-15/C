#include <stdio.h>
void swap(int* a, int* b){
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
  return;
}
int main(){
  int a,b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  swap(&a, &b);

  printf("Value of a: %d\n", a);
  printf("Value of b: %d\n", b);

  return 0;
}