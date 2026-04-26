// second Max find from array way I
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
            max = arr[i];
        }
    }

    for(int i = 0;i<num;i++)
    {
        if(smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }

    printf("second max : %d" , smax);
    return 0;
}