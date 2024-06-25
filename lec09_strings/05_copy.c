#include <stdio.h>
#include <string.h>
int main(){

  // char s1[] = "Physics Wallah";
  // char *s2 = s1;  // shallow copy (pass by reference)
  // s1[0] = 'M';
  char* s1 = "Physics Wallah";
  char* s2;
  s2 = s1;
  s2 = "College wallah";
  printf("%p\n", s1);
  printf("%p\n", s2);
  printf("%s\n", s1);
  printf("%s\n", s2);
}