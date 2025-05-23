// print the floyid triangle
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int count = 1;
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d " , count);
            count++;
        }
        printf("\n");
    }
    return 0;
}