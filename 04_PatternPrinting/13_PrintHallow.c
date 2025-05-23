// print the hallow reactangle
#include<stdio.h>
int main()
{
    int r , c;
    printf("Enter the row : ");
    scanf("%d" , &r);

    printf("Enter the col : ");
    scanf("%d" , &c);

    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j<=c;j++)
        {
            if(i == 1 || j== 1 || j == c || i == r)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}