// reverse the array without using the extra array variable
#include<stdio.h>
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

    int i = 0;
    int j = num-1;
    while(i<= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printf("After the swap : ");
    for(int k = 0;k<num;k++)
    {
        printf("%d " , arr[k]);
    }
    return 0;

}