#include <stdio.h>
int main(){
  int arr[9] = {5,0,2,0,0,4,1,3,0};
  int n = 9;
  int ans[9];
  int idx = 0;

  // for(int i=0; i<9; i++){ //using another array
  //   if(arr[i] != 0){
  //     ans[idx] = arr[i];
  //     idx++;
  //   }
  // }

  //USING BUBBLE SORT

  for(int i=0; i<n-1; i++){  //for passes (max number of passes = n-1)
    int sorted = 1;
    for(int j=0; j<n-1-i; j++){
      if(arr[j] == 0){
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

  for(int i=0; i<9; i++){
    printf("%d", arr[i]);
  }
  return 0;
}