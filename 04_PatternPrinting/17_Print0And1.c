#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int flag = 1;
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            if(flag)
            {
                printf("%d" , flag);
                flag = 0;
            }else{
                printf("%d" , flag);
                flag = 1;
            }
        }
        printf("\n");
    }
    return 0;
}