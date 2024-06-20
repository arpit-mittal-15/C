#include <stdio.h>
int main(){
  printf("hello");
  int num;
  for(int i=1; i<501; i++){
    int sum = 0;
    num = i;
    while(num>0){
      int digit = num%10;
      sum = sum + (digit*digit*digit);
      num = num/10;
    }
    if(sum == i){
      printf("%d\n", i);
    }
  }
  return 0;
}