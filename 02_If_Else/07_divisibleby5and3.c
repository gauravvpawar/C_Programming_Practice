// check weather the number is divisible by 5 and 6 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the  number : ");
    scanf("%d" , &num);

    if(num % 5 == 0 && num % 3 == 0) 
    {
        printf("Number is divisible by 5 and as well as 3");
    }else{
        printf("Number is not divisible by 5 as well as 3");
    }
    return 0;
}