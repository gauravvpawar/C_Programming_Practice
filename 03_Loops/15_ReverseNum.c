// write a program the print the reverse of the number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int rev = 0;

    while(num > 0)
    {
        int mod = num % 10;
        rev = rev * 10 + mod;
        num /= 10;
    }

    printf("Reverse num : %d" , rev);
    return 0;
}