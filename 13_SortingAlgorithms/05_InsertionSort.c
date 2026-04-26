// sorting the array element by using the insertion sort
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int arr[] = {5 , 4 , 3 , 2 , 1};
    int n = 5;

    printf("Array element before swapping : \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d " , arr[i]);
    }


    for(int i = 1;i<n;i++)
    {
        int j = i;
        while( j > 0 && arr[j] < arr[j-1])
        {
            // swapping the number
            swap(&arr[j] , &arr[j-1]);
            j--;
        }

    }

    printf("\nArray element after swapping : \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d " , arr[i]);
    }

    return 0;
}