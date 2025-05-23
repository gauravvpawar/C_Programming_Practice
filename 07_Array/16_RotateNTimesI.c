// print the rotate whos n times rotation
#include<stdio.h>
void swap(int arr[] , int start , int end)
{
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
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

    int k;
    printf("Enter the k times rotation : ");
    scanf("%d" , &k);

    k = k % num;

    swap(arr,0 , num-1);
    swap(arr,0 , k-1);
    swap(arr,k , num-1);

    printf("After the k times rotation : ");
    for(int k = 0;k<num;k++)
    {
        printf("%d " , arr[k]);
    }
    return 0;
}