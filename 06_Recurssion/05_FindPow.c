// take two input number and print their power
#include<stdio.h>
int power(int a , int b)
{
    if(b == 0)
    {
        return 1;
    }

    return a * power(a , b-1);
}
int main()
{
    int a , b;
    printf("Enter the first number : ");
    scanf("%d" , &a);
    printf("Enter the second number : ");
    scanf("%d" , &b);

    int ans = power(a , b);
    printf("ans : %d" , ans);
    return 0;
}