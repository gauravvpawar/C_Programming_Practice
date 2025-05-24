// write the code for the bubble sort at the descending number
#include<stdio.h>
int main()
{
    int arr[5] = {1 , 2 , 3 ,4 ,5};
    int n = 5;
    for(int i = 0;i<n-1;i++)
    {
        int check = 1;
        for(int j = 0;j<n-1;j++)
        {
            if(arr[j+1] > arr[j])
            {
                // swapping occur
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                check = 0;
            }
        }

        if(check)
        {
            break;
        }
    }

    // printing array
    for(int i = 0;i<5;i++)
    {
        printf("%d " , arr[i]);
    }
    return 0;
}