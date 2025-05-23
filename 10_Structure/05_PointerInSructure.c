// pointers in structure
#include<stdio.h>
#include<string.h>
typedef struct Person{
    int age;
    float weight;
}Person;
int main()
{
    Person p1;
    p1.age = 20;
    p1.weight = 50.5;

    // printf("Age : %d \n" , p1.age);
    // printf("Weight : %f" , p1.weight);

    // by the pointers
    Person *x = &p1;
    printf("Age : %d \n" , *x.age);
    printf("Weight : %f" , *x.weight);
    return 0;
}