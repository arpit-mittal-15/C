#include <stdio.h>
int main(){
  int arr[5];

  for(int i=0; i<5; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  // {arr[0],arr[1],arr[2],arr[3],arr[4]}
  for(int i=0; i<5; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}