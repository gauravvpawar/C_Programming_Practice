// find the simple interest
// simple interest = (principal * rate * time) / 100

#include<stdio.h>
int main()
{
    int principle , rate , time;
    printf("Enter the principle : ");
    scanf("%d",&principle);
    printf("Enter the rate : ");
    scanf("%d" , &rate);
    printf("Enter the time : ");
    scanf("%d" , &time);

    float SI = (principle * rate * time) / 100;
    printf("Simple Interest : %f" , SI);
    return 0;
}