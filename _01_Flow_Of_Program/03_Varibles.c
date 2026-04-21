// variable 
// variable is used for to store data/value it used like container
#include<stdio.h>
#include<stdbool.h>

int main()
{
    // it has int , float ,double , char , bool
    int num = 20;
    printf("num : %d\n" , num);
    
    float gravity = 9.8;
    printf("gravity : %f\n" , gravity);

    char grade = 'a';
    printf("grade : %c\n" , grade);

    char name[] = "Gaurav";
    printf("name : %s\n" ,name);

    bool flag = true;// if you are using the bool then you have to import the boolean standard library
    printf("flag :%d\n" , flag);
    return 0;
}