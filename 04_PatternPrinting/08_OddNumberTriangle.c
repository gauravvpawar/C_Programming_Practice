// print the odd number triangle
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        int x = 1;
        for(int j = 1;j<=i;j++)
        {
            printf("%d" , x);
            x = x + 2;
        }
        printf("\n");
    }
    return 0;
}