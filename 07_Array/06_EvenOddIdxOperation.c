// change the even index increament by 10 and odd idx multuply by 2
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

    for(int i = 0;i < num;i++)
    {
        if(i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }else{
            arr[i] = arr[i] * 2;
        }
    }

    printf("Arrays : \n");
    for(int i = 0;i<num;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}