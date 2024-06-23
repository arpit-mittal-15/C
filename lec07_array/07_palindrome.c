#include <stdio.h>
int palindrome(int arr[], int n){
  int i = 0;
  int j = n-1;
  while(i<j){
    if(arr[i] != arr[j]) return 0;
    i++;
    j--;
  }
  return 1;
}
int main(){
  int n;
  printf("Enter number of digits: ");
  scanf("%d", &n);

  int copy = n;
  int digits = 0;

  while(copy>0){  //to get the number of digits
    digits++;
    copy = copy/10;
  }

  int arr[digits];

  for(int i=digits-1; i>=0; i--){
    arr[i] = n%10;
    n/=10;
  }

  if(palindrome(arr, digits)){
    printf("True");
  }
  else{
    printf("False");
  }

  return 0;
}