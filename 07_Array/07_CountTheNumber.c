// count the number in the array whose greater the target number
#include<stdio.h>
void printArr(int arr[] , int num)
{
    printf("\n original array : ");
    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }
}
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

    printArr(arr , num);
    int target;
    printf("Enter the target number : ");
    scanf("%d" , &target);

    int count = 0;
    for(int i = 0;i<num;i++)
    {
        if(arr[i] > target) 
        {
            count++;
        }
    }

    printf("Count : %d" , count);
    return 0;
}