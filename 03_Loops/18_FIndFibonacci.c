// take the n input number and print the fibonacci series
// n = 5
// 0 1 1 2 3 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the nth number : ");
    scanf("%d" , &num);

    int firstnum = 0 , secondNum = 1;
    printf("%d %d " , firstnum , secondNum);
    for(int i = 1;i<=(num - 2) ;i++)
    {
        int thirdnum = firstnum + secondNum;
        printf(" %d " , thirdnum);
        firstnum = secondNum;
        secondNum = thirdnum;
    }
    return 0;
}