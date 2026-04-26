// take two number and perform the operation on user entered
#include<stdio.h>
int main()
{
    int a , b;
    int sum = 0;
    char operation;
    printf("Enter the first number : ");
    scanf("%d" , &a);
    printf("Enter the second number : ");
    scanf("%d" , &b);

    printf("Enter the operation you have to perform : ");
    scanf("%c" , &operation);

    if(operation == '+')
    {
        sum = a + b;
    }else if(operation == '*')
    {
        sum = a * b;
    }else if(operation  == '-')
    {
        sum = a - b;
    }else if(operation == '/')
    {
        sum = a / b;
    }else if(operation == '%')
    {
        sum = a % b;   
    }
    else{
        printf("Invalid number.");
    }

    printf("Ans : %d",sum);
    return 0;
}