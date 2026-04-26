// 2d array matrix
#include<stdio.h>
int main()
{
    int r , c;
    printf("Enter the row size  : ");
    scanf("%d" , &r);
    printf("Enter the col size : ");
    scanf("%d" , &c);
    int arr[r][c];
    printf("Enter the array value: ");
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }

    printf("Original array : \n");
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}