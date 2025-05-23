// print the product of all array element
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

    // print the product
    int product = 1;
    for(int i = 0;i<num;i++)
    {
        product = product * arr[i];
    }

    printf("Product : %d" , product);
    return 0;
}