#include <stdio.h>
int main(){
  int arr[7] = {-10,-4,3,5,23,65,-22};

  int max = arr[0];

  for(int i = 0; i<=6; i++){
    if(arr[i] > max) max = arr[i];
  }

  printf("%d", max);

  return 0;
}