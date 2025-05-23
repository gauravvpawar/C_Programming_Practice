// find the second max number from the given array 
#include<stdio.h>
#include<limits.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int arr[num];
    for(int i = 0;i<num;i++)
    {
        printf("Enter the %d array value : " , i);
        scanf("%d" , &arr[i]);
    }

    printf("Original array : ");

    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0;i<num;i++)
    {
        if(max < arr[i])
        {
            smax = max;
            max = arr[i];
        }else if(smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }

    printf("Smax : %d" , smax);

    return 0;
}