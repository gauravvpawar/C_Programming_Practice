// pass the structure value inside the function 
#include<stdio.h>
typedef struct Pokemon{
    int hp;
    int speed;
    int power;
    char tier;
}Pokemon;

// while structure value in the function it does not reflect directly 
// you have to pass the pointer of the varible;
// void Changes(Pokemon P)
// {
//     P.hp = 200;
// }

void Changes(Pokemon *P)
{
    P->hp = 200;
}
int main()
{
    Pokemon Pikachu;
    Pikachu.hp = 100;
    Pikachu.speed = 120;
    Pikachu.power = 130;
    Pikachu.tier = 'A';

    // before changes occure
    printf("Before changes occure : \n");
    printf("%d \n" , Pikachu.hp);
    printf("%d \n" , Pikachu.speed);
    printf("%d \n"  , Pikachu.power);
    printf("%c \n" , Pikachu.tier);

    // Changes(Pikachu); first cant work
    Changes(&Pikachu);

    printf("After changes occure : \n");
    printf("%d \n" , Pikachu.hp);
    printf("%d \n" , Pikachu.speed);
    printf("%d \n"  , Pikachu.power);
    printf("%c \n" , Pikachu.tier);
    return 0;
}