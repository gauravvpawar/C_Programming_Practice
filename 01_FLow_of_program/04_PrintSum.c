// Keep taking numbers as inputs till the user enters ‘x’, after that print sum of all.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);
    int sum = 0;
    sum += num;
    while(1)
    {
        int x;
        printf("Enter the number or enter the x to print the sum of numbers : ");
        scanf("%d" , &x);
        // if(x)
    }
    return 0;
}