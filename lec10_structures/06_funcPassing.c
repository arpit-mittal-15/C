#include <stdio.h>
#include <string.h>

typedef struct Pokemon{
  int hp;
  int attack;
  int speed;
  char tier;
  char name[20];
} Pokemon; 

void func(Pokemon x){
  // printf("%d", x.attack);
  x.attack = 50;
  return;
}

int main(){
  Pokemon pikachu;
  pikachu.attack = 40;

  printf("%d", pikachu.attack);
  func(pikachu); //pass by value
  printf("%d", pikachu.attack);

  return 0;
}