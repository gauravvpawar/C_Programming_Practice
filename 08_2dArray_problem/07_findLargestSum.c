// in the 2d array find the largest sum and print the index of it
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

    int max = INT_MIN;
    int idx = 0;
    for(int i = 0;i<row;i++)
    {
        int sum =0;
        for(int j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }

        if(sum > max)
        {
            max = sum;
            idx = i;
        }
    }

    printf("Maximum sum of array row : %d and row idx : %d " , max , idx);
    return 0;
}