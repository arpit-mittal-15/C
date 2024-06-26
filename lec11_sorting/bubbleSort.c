#include <stdio.h>
int main(){
  int arr[5] = {1,2,3,4,5};
  int n = 5;

  // BUBBLE SORT

  for(int i=0; i<n-1; i++){  //for passes (max number of passes = n-1)
    int sorted = 1;
    for(int j=0; j<n-1-i; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        sorted = 0;
      }
    }
    if(sorted == 1){
      break;
    }
  }

  for(int i=0; i<5; i++){  // for output
    printf("%d", arr[i]);
  }

  return 0;
}