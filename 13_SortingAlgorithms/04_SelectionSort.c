// sorting the number using selection sort 
//  in selection sort finding the minimum element and find the max one
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[] = {5 , 4 , 3 , 2 , 1};
    int n = 5;
    // printing array before swapping
    printf("Before Swaping array : \n");
    for(int i = 0;i<5;i++)
    {
        printf("%d " , arr[i]);
    }
    for(int i = 0;i<n - 1;i++)
    {
        int min = INT_MAX;  
        int min_idx = -1;

        // finding the min element
        for(int j = i;j<=n-1;j++)
        {
            if(arr[j] < min)
            {
                min = arr[i];
                min_idx = j;
            }
        }

        //  swap the number after finding min
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // printing array after swapping
    printf("\nPrinting array after swap : \n");
    for(int i = 0;i<5;i++)
    {
        printf("%d " , arr[i]);
    }
    return 0;
}