// take the input number and print the +ve number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    if(num < 0)
    {
        printf("%d" , num * -1);
    }else{
        printf("%d" , num);
    }
    return 0;
}