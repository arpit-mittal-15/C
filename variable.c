#include <stdio.h>

int main(){
  printf("Hello\n");

  // int x = 5;
  // int y = 2;
  // float z = x/y;
  // printf("%f", z);

  // int r = 5;
  // float v = 4 * 3.1415 * r * r * r/3;
  // printf("The volume is: %f", v);

  // int fm = 40;
  // int m1 = 30;
  // int m2 = 35;
  // int m3 = 20;
  // int m4 = 36;
  // float percentage = ((m1 + m2 + m3 + m4)*100)/160;
  // printf("Your percentage is: %f", percentage);

  float p,r,t,si;
  p=100;
  r=10;
  t=2;
  si = (p*r*t)/100;
  printf("Simple Interest: %f", si);

  return 0;
}