// find the factorial of the given number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int fact = 1;
    for(int i = 1;i<=num;i++)
    {
        fact = fact * i;
    }

    printf("Fact : %d" , fact);
    return 0;
}