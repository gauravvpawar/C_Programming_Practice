// pokemon as well as the LegendaryPokemon
#include<stdio.h>
int main()
{
    struct Pokemon{
        int hp ; 
        int attack;
        int speed;
    };

    struct LegendaryPokemon{
        int specialAttack;
        struct Pokemon x;
    };


    // creating the pokemon object
    struct Pokemon Pikachu;
    Pikachu.hp = 100;
    Pikachu.attack = 80;
    Pikachu.speed = 120;

    // printing the pikachu skills
    printf("Pikachu hp : %d \n" , Pikachu.hp);
    printf("Pikachu hp : %d \n" , Pikachu.attack);
    printf("Pikachu hp : %d \n" , Pikachu.speed);

    struct LegendaryPokemon MewTwo;
    MewTwo.specialAttack = 100;
    MewTwo.x.hp = 120;
    MewTwo.x.attack = 150;
    MewTwo.x.speed = 210;

    printf("MewTwo specialAttack : %d \n" , MewTwo.specialAttack);
    printf("MewTwo hp : %d \n" , MewTwo.x.hp);
    printf("MewTwo attack : %d \n" , MewTwo.x.attack);
    printf("MewTwo speed : %d \n" , MewTwo.x.speed);
    return 0;
}