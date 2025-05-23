// find the two point sum in the given array
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

    int r1 , c1 , r2 , c2;
    printf("Enter the starting point r1 you want the sum : ");
    scanf("%d" , &r1);
    printf("Enter the start second point c1 : ");
    scanf("%d" , &c1);
    printf("Enter the ending point of array r2 : ");
    scanf("%d", &r2);
    printf("Enter the ending point of array c2 : ");
    scanf("%d" , &c2);

    int sum = 0;
    for(int i = r1;i<=r2;i++)
    {
        for(int j = c1;j<=c2;j++)
        {
            sum += arr[i][j];
        }
    }

    printf("Sum of cordinate : %d" , sum);
    return 0;
}