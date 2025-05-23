// deep copy in structure
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct Pokemon{
        char name[15];
        int hp;
        int speed;
        char tier;
    }Pokemon;

    Pokemon a , b , c;
    strcpy(a.name , "Pikachu");
    
    b = a; //copy all the value in b
    strcpy(b.name, "balbasaur");

    printf("%s \n" , a.name);
    printf("%s" , b.name);


    
    return 0;
}