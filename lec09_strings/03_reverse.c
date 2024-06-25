#include <stdio.h>
#include <string.h>
int main(){
  char str[40];

  scanf("%[^\n]s", str);

  int size = 0;
  int k = 0;
  while(str[k] != '\0'){  // getting the size of the string
    size++;
    k++;
  }

  for(int i=0, j=size-1; i<j; i++, j--){
    char temp = str[j];
    str[j] = str[i];
    str[i] = temp;
  }
  
  puts(str);

  return 0;
}