// print the two sum pair those pair is equal to the target number
#include<stdio.h>
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

    int target;
    printf("Enter the target number : ");
    scanf("%d" , &target);

    for(int i = 0;i<num;i++)
    {
        for(int j = i+1;j<num;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("pair :( %d , %d) \n" , arr[i] , arr[j]);
            }
        }
    }
    return 0;
}