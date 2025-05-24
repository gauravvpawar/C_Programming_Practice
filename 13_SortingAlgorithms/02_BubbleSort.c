// bubble sort in c
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5] = {5 , 4 , 2 , 3, 1};
    int n = 5;
    for(int i = 0;i< n-1;i++)
    {
        bool check = true;
        for(int j = 0;j<n-i-1;j++)
        {
            // check the number is swap or not
            if(arr[j] > arr[j+1])
            {
                // swap the number
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = false;
            }
        }
        if(check == true)
        {
            break;
        }
    }
    
    for(int i = 0;i<5;i++)
    {
        printf("%d " , arr[i]);
    }
    return 0;
}