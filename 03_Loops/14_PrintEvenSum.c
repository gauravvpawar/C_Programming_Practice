// print the even sum of the given digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int sum = 0;
    while(num >0)
    {
        int mod = num % 10;
        if(mod % 2 == 0)
        {
            sum = sum + mod;
        }
        num /= 10;
    }

    printf("Sum : %d" , sum);
    return 0;
}