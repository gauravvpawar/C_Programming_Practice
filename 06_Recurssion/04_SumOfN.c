// print the sum of n number
#include<stdio.h>
int sum(int num)
{
    if(num == 1)
    {
        return 1;
    }

    return num + sum(num-1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int ans = sum(num);
    printf("Sum  : %d" , ans);
    return 0;
}