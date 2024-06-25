#include <stdio.h>
#include <string.h>

int main(){
  char str[15];

  // gets(str);  // for INPUT of entire sentence
  //    OR
  scanf("%[^\n]s", str);

  // printf("%s", str); 
  //       OR
  puts(str);

  return 0;
}