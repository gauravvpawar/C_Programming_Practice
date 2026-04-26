// find the maximum number of one in row
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

    int count = 0;
    int idx = 0;;
    for(int i = 0;i<row;i++)
    {
        int sum = 0;
        for(int j = 0;j<col;j++)
        {
            if(arr[i][j] == 1)
            {
                sum++;
            }
        }
        if(sum > count)
        {
            count = sum;
            idx = i;
        }
    }

    printf("Maximum count of 1 in : %d at idx : %d" , count , idx);
    return 0;
}