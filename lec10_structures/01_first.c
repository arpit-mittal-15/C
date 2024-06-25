#include <stdio.h>
int main(){
  struct pokemon{
    int hp;
    int speed;
    int attack;
  } pikachu;
  
  // struct pokemon pikachu;
  pikachu.hp = 40;
  pikachu.attack = 50;
  pikachu.speed = 100;

  printf("%d", pikachu.hp);

  return 0;
  
}