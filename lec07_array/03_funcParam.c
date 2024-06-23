#include <stdio.h>
void func(int arr[]){
  for(int i=0; i<=4; i++) arr[i] *= 2;
  return;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  for(int i=0; i<=4; i++) printf("%d ", arr[i]);
  func(arr);
  for(int i=0; i<=4; i++) printf("%d ", arr[i]);
  return 0;
}