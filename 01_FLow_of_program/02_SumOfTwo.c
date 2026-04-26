// take a two number and print the sum of it
#include<Stdio.h>
int main()
{
    int num1 , num2;
    printf("Enter the first number : ");
    scanf("%d" , &num1);
    printf("Enter the second number : ");
    scanf("%d" , &num2);

    printf("Addition: %d\n" , num1 + num2);
    printf("Subtraction : %d\n" , num1 - num2);
    printf("Multiplication : %d\n" , num1 * num2);
    printf("Divisor: %d\n" , num1 / num2);
    printf("Modulo: %d \n" , num1 % num2);

    return 0;
}