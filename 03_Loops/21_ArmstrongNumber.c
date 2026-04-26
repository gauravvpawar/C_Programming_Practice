// print the armstrong number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    // print the armstrong number
    int sum = 0;
    int temp = num;
    while(num > 0)
    {
        int mod = num % 10;
        int power = 1;
        for(int i = 1;i<=3;i++)
        {
            power = power * mod;   
        }

        sum = sum + power;
        // printf(" %d " , sum);
        num /= 10;
    }

    if(temp == sum)
    {
        printf("Given number is armstrong  number");
    }else{
        printf("Given number is not armstrong number.");
    }
    return 0;
}