// check weather the number is divisible by 3 , 5 , 15
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    if(num % 3 == 0)
    {
        if(num % 5 == 0)
        {
            if(num % 15 == 0)
            {
                printf("Number is divisible by 3 , 5 , 15");
            }else{
                printf("Number is divide by 3 , 5 but not 15");
            }
        }else{
            printf("Number is divide by 3 but not 5  , 15");
        }
    }else{
        printf("Number is not divide by 3 , 5, 15");
    }
    return 0;
}