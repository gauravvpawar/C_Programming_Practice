// print the number triangle
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of num : ");
    scanf("%d", &num);


    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d" , j);
        }

        printf("\n");
    }

    return 0;
}