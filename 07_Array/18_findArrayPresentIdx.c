// find the x number is present at which idx 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array : ");
    scanf("%d" , &num);

    int arr[num];
    for(int i = 0;i<num;i++)
    {
        printf("Enter the %d array element : ", i);
        scanf("%d" , &arr[i]);
    }

    printf("Original array : \n");
    for(int i = 0;i<num;i++)
    {
        printf("%d " , arr[i]);
    }
    int target;
    printf("Enter the target number : ");
    scanf("%d" , &target);

    for(int i = 0;i<num;i++)
    {
        if(arr[i] == target)
        {
            printf("Target number is present at %d", i);
            break;
        }
    }
    return 0;
}