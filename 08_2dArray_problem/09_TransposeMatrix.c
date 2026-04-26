// transpose of the matrix
#include<stdio.h>
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

    for(int i = 0;i<col;i++)
    {
        for(int j = 0;j<row;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}