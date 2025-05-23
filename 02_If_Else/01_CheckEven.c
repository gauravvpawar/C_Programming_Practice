// take number and print the given number is even  or odd
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    if(num % 2 == 0)
    {
        printf("Even number");
    }else{
        printf("Odd number");
    }
    return 0;
}