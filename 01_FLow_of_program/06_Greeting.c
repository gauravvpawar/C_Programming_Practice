// take a name and print the name of greeting

#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the good name :");
    scanf("%s" , &name);

    printf("Have a good day %s" , name);
    return 0;
}