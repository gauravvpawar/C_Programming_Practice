// sum of 2d matrices
#include<stdio.h>
int main()
{
    int row , col;
    printf("Enter the  row size of array : ");
    scanf("%d" , &row);
    printf("Enter the col size of array : ");
    scanf("%d" , &col);
    int arr[row][col];

    printf("Enter the  array value : \n");
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {   
            printf("Enter the array %d value : " , j);
            scanf("%d" , &arr[i][j]);
        }
        printf("\n");
    }

    printf("Original array : \n");
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Sum of array : %d" , sum);
    return 0;
}