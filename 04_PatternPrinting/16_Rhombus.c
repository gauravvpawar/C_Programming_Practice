// print the rhombus of *
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<(num-i+1);j++)
        {
            printf(" ");
        }
        for(int k = 1;k<=num;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}