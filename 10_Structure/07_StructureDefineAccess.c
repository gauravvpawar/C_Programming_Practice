// defining the structure in the better format as well as the access the values

#include<stdio.h>
typedef struct Pokemon{
    int hp;
    int speed;
    int power;
    char tier;
}Pokemon;

// function prototype
void Changes(Pokemon *P);

int main()
{
    Pokemon Pikachu = {100 , 120 , 130}; // declare
    // step 1: definition
    // Pikachu.hp = 100;
    // Pikachu.speed = 120;
    // Pikachu.power = 130;
    
    // another way of definition
    Pikachu.tier = 'A';

    printf("Before changes occure : \n");
    printf("%d \n" , Pikachu.hp);
    printf("%d \n" , Pikachu.speed);
    printf("%d \n"  , Pikachu.power);
    printf("%c \n" , Pikachu.tier);

    Changes(&Pikachu);
    
    printf("after changes occure : \n");
    printf("%d \n" , Pikachu->hp);

    return 0;
}


void Changes(Pokemon *P)
{
    //(*p).hp = 200;
    P->hp = 200;
}