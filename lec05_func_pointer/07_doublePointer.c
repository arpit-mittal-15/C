#include <stdio.h>
int main(){
  int a = 25;  //
  int* x = &a;  //x stores address of a
  int** y = &x;  // y stores address of pointer x

  printf("%d\n", a);
  printf("%d\n", *x); //*x gives the value stored in the stored address
  printf("%d\n", **y); //**y gives the value stored in a 
  return 0;
}