#include <stdio.h>
typedef int* pointer;
int main(){
  int x = 4, y = 5;
  // int* a = &x, b = &y; //ERROR
  pointer a = &x, b = &y;

  printf("%p\n", a);
  printf("%p", b);

  return 0;
}