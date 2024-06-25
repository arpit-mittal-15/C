#include <stdio.h>
#include <string.h>

typedef struct Pokemon{
  int hp;
  int attack;
  int speed;
  char tier;
  char name[20];
} Pokemon; 

void change(Pokemon* p){
  p->attack = 20;

  (*p).speed = 100;

  return;
}

int main(){
  Pokemon pikachu = {30, 40, 50, 'A', "Pikachu"};
  // pikachu.hp = 30;
  // pikachu.attack = 40;
  // pikachu.speed = 50;
  // pikachu.tier = 'A';
  // strcpy(pikachu.name, "Pikachu");

  // Pokemon* x = &pikachu; // to declare a pointer of Pokemon

  printf("%d\n", pikachu.hp);
  printf("%d\n", pikachu.attack);
  printf("%d\n", pikachu.speed);
  printf("%c\n", pikachu.tier);
  printf("%s\n", pikachu.name);

  // (*x).hp = 100; //to change the value using pointer

  change(&pikachu);

  printf("%d\n", pikachu.hp);
  printf("%d\n", pikachu.attack);
  printf("%d\n", pikachu.speed);
  printf("%c\n", pikachu.tier);
  printf("%s\n", pikachu.name);

  return 0;
}