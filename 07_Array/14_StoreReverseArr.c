// store the array in reverse order
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of the array : ");
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

    int temp[num];
    int j =num-1;
    int i = 0;
    while(i < num)
    {
        temp[i] = arr[j];
        i++;
        j--;
    }

    printf("Temperory array :\n");
    for(int k = 0;k<num;k++)
    {
        printf("%d " , temp[k]);
    }

    return 0;
}