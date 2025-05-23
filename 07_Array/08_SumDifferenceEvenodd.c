// print the sum of difference between the even place sum as well as the odd place sum of array
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array : ");
    scanf("%d" , &num);

    int arr[num];
    for(int i = 0;i<num;i++)
    {
        printf("Enter the %d array element : " , i);
        scanf("%d", &arr[i]);
    }

    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0;i<num;i++)
    {
        if(i % 2 == 0)
        {
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }

    printf("Difference  : %d" , evenSum - oddSum);
    return 0;
}