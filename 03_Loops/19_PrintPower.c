// take user two number and print the power of those number
#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter the base number : ");
    scanf("%d" , &a);
    printf("Enter the power number : ");
    scanf("%d" , &b);

    int power = 1;
    for(int i = 1;i<=b;i++)
    {
        power = power * a;
    }

    printf("%d" , power);
    return 0;
}