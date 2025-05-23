// check the weather the program leap year not

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d" , &year);

    if((year % 4 == 0 && year % 400 != 0 ) || year % 100 == 0)
    {
        printf("Given year is leap year.");
    }else{
        printf("Given year is not leap year.");
    }
    return 0;
}