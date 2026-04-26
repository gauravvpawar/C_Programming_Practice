// find the number of count to reach the step
#include<stdio.h>

int countStep(int num)
{
    if(num == 1 || num == 2)
    {
        return num;
    }

    return countStep(num-1) + countStep(num - 2);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);
    
    printf("%d" , countStep(num));
    return 0;
}