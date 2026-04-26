// check the given number armstrong number or not
#include<Stdio.h>
int power(int a , int b)
{
    int ans = 1;
    for(int i = 0;i<b;i++)
    {
        ans += a*a;
    }

    return ans;
}
int main()
{
    int num , temp ,sum , count = 0 ;
    printf("Enter the number : ");
    scanf("%d" , &num);
    
    temp = num;

    while(num > 0)
    {
        int mod = num%10;
        sum += power(mod , count);
        printf("\nsum : %d" , sum);
        num /= 10;
    }

    if(temp == sum)
    {
        printf("Given number is armstrong number");
    }else{
        printf("Given number is not armstrong number");
    }
    return 0;
}