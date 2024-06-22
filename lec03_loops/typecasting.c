#include <stdio.h>
int main(){
  // char ch= 'A';
  // printf("%c ", ch);
  // int x = (int)ch;
  // printf("%d", x);
  for(int i=65; i<91; i++){
    char ch = (char)i;
    printf("%c -> %d\n", ch, i);
  }
  return 0;
}