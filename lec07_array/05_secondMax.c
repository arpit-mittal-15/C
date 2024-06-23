#include <stdio.h>
#include <limits.h>
int main(){
  int arr[7] = {100,-4,3,5,23,65,-22};

  int max = INT_MIN;
  int smax = INT_MIN;

  // for(int i = 0; i<=6; i++){
  //   if(arr[i] > max) max = arr[i];
  // }
  // for(int i = 0; i<=6; i++){
  //   if(arr[i] != max && arr[i] > smax) smax = arr[i];
  // }
  for(int i=0; i<=6; i++){
    if(arr[i]> max){
      smax = max;
      max = arr[i];
    }
    else if(arr[i]>smax){
      smax = arr[i];
    }
  }

  printf("%d", smax);

  return 0;
}