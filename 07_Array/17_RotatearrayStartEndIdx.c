// rotate the array give the start idx and as well as the end idx
#include<stdio.h>
void swap(int arr[], int i , int j)
{
    while(i<=j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int arr[num];

    for(int i = 0;i<num;i++)
    {
        printf("Enter the array %d value : ",i);
        scanf("%d" , &arr[i]);
    }

    printf("Original array : \n");
    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }

    int start , end;
    printf("Enter the start idx : ");
    scanf("%d" , &start);
    printf("Enter the end idx : ");
    scanf("%d",&end);

    swap(arr , start , end);

    printf("After the swap : ");
    for(int i = 0;i<num;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}