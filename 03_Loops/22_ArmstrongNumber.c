// armstrong number 
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int temp = num;

    int count = 0;
    while(num > 0)
    {
        count ++;
        num /= 10;
    }

    num = temp;
    int sum = 0;
    
    while(num > 0)
    {
        int mod = num % 10;
        int power = 1;
        for(int i = 1;i<=count;i++)
        {
            power = power * mod;
        }
        printf("sum : %d \n" , sum);
        sum = sum +power;
        num /= 10;
    }

    if(temp == sum)
    {
        printf("Given number is armstrong number");
    }else{
        printf("Given number is not armstrong number");
    }
    return 0;
}