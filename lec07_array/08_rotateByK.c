#include <stdio.h>
void reverse(int arr[], int si, int ei){
  for(int i= si, j = ei; i<j; i++, j--){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return;
}
void stepReverse(int arr[], int n){
  reverse(arr, 0, 6);
  reverse(arr, 0, n-1);
  reverse(arr, n, 6);
  return;
}
int main(){
  int arr[7]= {1,2,3,4,5,6,7};

  int n;
  printf("Enter the steps: ");
  scanf("%d", &n);

  stepReverse(arr, n%7);

  for(int i = 0; i<7; i++){
    printf("%d", arr[i]);
  }

  return 0;
}