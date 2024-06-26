#include <stdio.h>
#include <limits.h>
int main(){
  int arr[7] = {7,4,5,9,8,2,1};
  int n=7;

  for(int i=0; i<n; i++){
    int min = arr[i];
    int minidx;
    for(int j=i+1; j<n; j++){
      if(arr[j] < min){
        min = arr[j];
        minidx = j;
      }
    }
    if(arr[i] != min){
      int temp = arr[i];
      arr[i] = min;
      arr[minidx] = temp;
    }
  }

  for(int i=0; i<n; i++){
    printf("%d", arr[i]);
  }

  return 0;
}