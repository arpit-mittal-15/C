//  *  *  *  *  * 
//  *           * 
//  *           * 
//  *  *  *  *  * 

#include <stdio.h>
int main(){
  int l,b;
  printf("Enter length: ");
  scanf("%d", &l);
  printf("Enter breadth: ");
  scanf("%d", &b);

  for(int i = 1; i<=b; i++){
    for(int j = 1; j<=l; j++){
      if(i == 1 || j == 1 || i == b || j == l) printf(" * ");
      else printf("   ");
    }
    printf("\n");
  }
  return 0;
}