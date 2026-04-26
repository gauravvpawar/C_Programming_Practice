// find the target number in given array
#include<stdio.h>
int main()
{
    int arr[] = {1 , 2 , 3 , 4 ,  5 ,6 , 7 , 8};

    int i = 0;
    int j = 8 - 1;
    int target = 8;

    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            printf("Target sum found at : %d , %d \n" , i , j );
            i++;
            j--;
        }

        else if(arr[i] + arr[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}