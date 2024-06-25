#include <stdio.h>
#include <string.h>

int main(){
  struct Pokemon{
    int hp;
    int attack;
    int speed;
  };
  struct LegendaryPokemon{
    int specialAttack;
    struct Pokemon x;
  };

  struct Person{
    char name[50];
    int salary;
    int age;
  };

  struct Person personOne;
  personOne.age = 20;
  strcpy(personOne.name,"Arpit");
  personOne.salary = 20000;

  printf("%s", personOne.name);

  return 0;
}