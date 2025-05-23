// count the digit of the given number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);
    int count = 0;
    while(num > 0)
    {
        count++;
        num /= 10;
    }

    printf("count digit : %d" , count);
    return 0;
}