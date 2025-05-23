// a person can jump to the destination 1 , 2 as well as the 3
#include<stdio.h>
int countStep(int num)
{
    if(num == 1 || num == 2 || num == 3)
    {
        return num;
    }

    return countStep(num - 1) + countStep(num -2)+countStep(num -3);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    printf("Count ways : %d" , countStep(num));
    return 0;
}