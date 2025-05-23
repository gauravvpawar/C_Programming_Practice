// 2d array matrix
#include<stdio.h>
void takeInput( int r , int c , int arr[r][c])
{
    printf("Enter the array value : ");
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
}
void printArr( int r , int c , int arr[r][c])
{
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r1 , c1 , r2, c2;
    printf("Enter the array1 row size  : ");
    scanf("%d" , &r1);
    printf("Enter the array1 col size : ");
    scanf("%d" , &c1);
    int arr1[r1][c1];
    takeInput(r1 , c1 , arr1);
    printf("Original array : \n");
    printArr(r1 , c1 , arr1);

    printf("Enter the array2 row size : ");
    scanf("%d" , &r2);
    printf("Enter the array2 col size : ");
    scanf("%d" , &c2);
    int arr2[r2][c2];
    takeInput(r2 , c2 , arr2);
    printf("Original array : ");
    printArr( r2 , c2 , arr2);

    int sum[r2][c2];
    for(int i = 0;i<r1;i++)
    {
        for(int j = 0;j<c1;j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Original array : \n");
    printArr(r2 , c2 , sum);

    return 0;
}