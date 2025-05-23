// union basic
#include<stdio.h>
union Pokemon{
    int hp;
    int speed;
    int power;
    char tier;
};
// 4 + 4  + 4 + 1  =13 size
int main()
{
    union Pokemon Pikachu ;
    Pikachu.hp = 100;
    Pikachu.speed = 150;
    Pikachu.power= 80;
    Pikachu.tier = 'A';

    
    printf("Before changes occure : \n");
    printf("%d \n" , Pikachu.hp);
    printf("%d \n" , Pikachu.speed);
    printf("%d \n" , Pikachu.power);
    printf("%c \n" , Pikachu.tier);  // last value is assigning to all
    return 0;
}