// print the fibonacci series till n
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int firstNum = 0 , secondNum = 1;
    printf("%d ", firstNum);
    printf("%d ", secondNum);
    int thirdNum;
    for(int i = 1;i<=num - 2 ; i++)
    {
        thirdNum = firstNum + secondNum;
        printf("%d " , thirdNum);
        firstNum = secondNum;
        secondNum = thirdNum;
    }
    return 0;
}