// store the transpose matrix using the array
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

    int arr2[col][row];
    for(int i = 0;i<col;i++)
    {
        for(int j = 0;j<row;j++)
        {
            arr2[j][i] = arr[i][j] ;
        }
    }

    printArr(row , col ,arr2);
    return 0;
}