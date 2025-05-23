// to declare the array and access the array element
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of the array : ");
    scanf("%d" , &num);

    // array define
    int arr[num];
    for(int i = 0;i<num;i++)
    {
        printf("Enter the array %d element : " , i);
        scanf("%d" , &arr[i]);
    }

    printf("original array :\n ");
    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }
    return 0;
}