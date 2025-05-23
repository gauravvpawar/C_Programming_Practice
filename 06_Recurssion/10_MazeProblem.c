// maze problem
#include<stdio.h>
int maze(int m , int n)
{
    int rightways = 0;
    int downways = 0;
    if(m == 1 && n == 1)
    {
        return 1;
    }

    if(m == 1)
    {
        rightways += maze(m , n-1);
    }

    if(n == 1)
    {
        downways += maze(m -1 , n);
    }
    if(m > 1 && n > 1)
    {
       downways += maze(m - 1 ,n);
       rightways +=  maze(m ,n-1);
    }

    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int m , n;
    printf("Enter the row : ");
    scanf("%d" , &m);
    printf("Enter the col : ");
    scanf("%d" , &n);
    int ways = maze(m , n);
    printf("ways : %d" , ways);
    return 0;
}