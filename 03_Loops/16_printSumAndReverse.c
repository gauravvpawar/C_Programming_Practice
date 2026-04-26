// take the input number and print the sum of reverse of it
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);
    
    int count = 0;
    int rev = 0;

    while(num > 0)
    {
        int mod = num % 10;
        count += mod;
        rev = rev * 10 + mod;
        num /= 10;
    }

    printf("reverse : %d\n" , rev);
    printf("Count : %d" , count);
    return 0;
}