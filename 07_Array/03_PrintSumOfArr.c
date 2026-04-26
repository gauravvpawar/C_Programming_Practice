// print the sum of element in array
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
        scanf("%d" , &arr[i]);
    }

    printf("Original array : \n");
    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }

    int sum = 0;
    for(int i = 0;i<num;i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of element : %d" , sum);
    return 0;
}