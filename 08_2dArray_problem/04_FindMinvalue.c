// find the minimum value in the array
#include<stdio.h>
#include<limits.h>

void takeInput(int row , int col , int arr[row][col])
{
    printf("Enter the array value : ");
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
}

void printArr(int row , int col , int arr[row][col])
{
    printf("Original array : \n");
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row , col;
    printf("Enter the row size of array : ");
    scanf("%d" , &row);
    printf("Enter the col size of array : ");
    scanf("%d" , &col);

    int arr[row][col];
    takeInput(row , col , arr);
    printArr(row , col , arr);

    int min = INT_MAX;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("Minimum value : %d" , min);
    return 0;
}