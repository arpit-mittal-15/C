#include <stdio.h>
#include <string.h>
int main(){
  typedef struct Pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
  } Pokemon;

  // Pokemon pikachu;

  // pikachu.attack = 100;
  // pikachu.hp = 40;
  // pikachu.speed = 80;
  // pikachu.tier = 'A';

  Pokemon arr[3];

  arr[0].attack = 40;
  arr[0].hp = 60;
  arr[0].speed = 70;
  arr[0].tier = 'A';
  strcpy(arr[0].name, "Pikachu");

  arr[1].attack = 40;
  arr[1].hp = 20;
  arr[1].speed = 30;
  arr[1].tier = 'B';
  strcpy(arr[1].name, "Bulba");

  arr[2].attack = 60;
  arr[2].hp = 80;
  arr[2].speed = 90;
  arr[2].tier = 'S';
  strcpy(arr[2].name, "Mewtwo");

  for(int i=0; i<3; i++){
    printf("%s\n", arr[i].name);
    printf("Attack: %d\n", arr[i].attack);
    printf("HP: %d\n", arr[i].hp);
    printf("Speed: %d\n", arr[i].speed);
    printf("Tier: %c\n\n", arr[i].tier);
  }


  return 0;
}