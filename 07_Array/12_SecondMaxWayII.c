// find the second max number using the way II
// it works when the array value is does not repeat
// like int arr = { 1, 2 ,3 ,4 ,4 ,5, 5 ,2};
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
        }
        else if(smax < arr[i])
        {
            smax = arr[i];
        }
    }


    printf("Second max : %d" , smax);
    return 0;
}