// basic information about the typedef
#include<stdio.h>
int main()
{
    typedef struct Pokemon{
        int hp;
        int speed;
        int power;
    } Pokemon;


    Pokemon pikachu; // you can define the pokemon as the while creating just using the  typedef name is Pokemon
    pikachu.hp = 100;
    pikachu.speed = 80;
    pikachu.power = 130;


    return 0;
}