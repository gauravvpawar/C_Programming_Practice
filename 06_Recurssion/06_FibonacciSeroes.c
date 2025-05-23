// print the fibonacci series using recurssion
#include<stdio.h>
int fib(int num)
{
    if(num == 1 || num == 2)
    {
        return 1;
    }

    return fib(num - 1) + fib(num - 2);
}
int main()
{
    int num;
    printf("Enter the number : " );
    scanf("%d" , &num);

    int ans = fib(num);
    printf("fib : %d" , ans);
    return 0;
}