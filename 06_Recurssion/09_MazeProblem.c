// to find the number of ways to reach the goal
#include<stdio.h>
int maze(int currentRow , int currentCol , int endRow , int endCol)
{
    int rightways = 0;
    int downways = 0;

    if(currentRow == endRow && currentCol == endCol)
    {
        return 1;
    }

    if(currentRow == endRow)
    {
        rightways += maze(currentRow , currentCol + 1, endRow , endCol);
    }

    if(currentCol == endCol)
    {
        downways += maze(currentRow  + 1, currentCol , endRow , endCol);
    }

    if(currentRow < endRow && currentCol < endCol)
    {
        rightways += maze(currentRow , currentCol + 1 , endRow , endCol);
        downways += maze(currentRow + 1 , currentCol , endRow , endCol);
    }

    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int m , n ;
    printf("Enter the row size of maze : ");
    scanf("%d" , &m);
    printf("Enter the col size of maze : ");
    scanf("%d" , &n);

    int ways = maze(1 , 1 , m , n);
    printf("Ways : %d" , ways);
    return 0;
}