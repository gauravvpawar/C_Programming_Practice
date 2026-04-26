// print the maximum marks
#include<stdio.h>
#include<limits.h>
int main()
{
    int num;
    printf("Enter the size of array : ");
    scanf("%d" , &num);

    int arr[num];

    for(int i = 0;i<num;i++)
    {
        printf("Enter the %d array element : " , i);
        scanf("%d" , &arr[i]);
    }

    printf("Original array : \n");
    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }

    int max = INT_MIN;
    for(int i = 0;i<num;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("maximum : %d" , max);
    return 0;
}