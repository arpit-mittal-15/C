#include <stdio.h>
int main(){
  int a = 5;  // a stores a value at a certain address
  int* x = &a;  // x is a pointer that stores address of a
  printf("%p\n", &a);  // & is for the address of the variable
  printf("%p\n", x);  // %p is for pointer dataType
  printf("%d\n", *x);  // *x have the value of the address that it stores
  return 0;
}