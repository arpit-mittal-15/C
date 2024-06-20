#include <stdio.h>
int main(){

  // PROFIT LOSS CALCULATOR
  int cp, sp;
  printf("Enter the cost price: ");
  scanf("%d", &cp);
  printf("Enter the selling price: ");
  scanf("%d", &sp);

  if(sp > cp){
    printf("You are making a profit of ₹%d", sp-cp);
  }
  else if (cp > sp)
  {
    printf("You are incurring a loss of ₹%d", cp-sp);
  }
  else{
    printf("No profit, no loss");
  }
  
  return 0;
}