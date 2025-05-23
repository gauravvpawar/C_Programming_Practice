// print decreasing 
#include<stdio.h>
void decrease(int num)
{
    if(num == 0)
    {
        return;
    }

    printf("%d\n" , num);
    decrease(num-1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    decrease(num);
    return 0;
}