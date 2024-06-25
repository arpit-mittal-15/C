#include <stdio.h>
typedef float decimal;
int main(){
  decimal a = 1.34;

  typedef struct Book
  {
    char name[50];
    int pages;
    float price;
  } PW;
  
  PW firstBook;  // short cut for -> struct Book firstBook;

  printf("%f", a);

  return 0;
}