// write the code in that if array contain the number as well as the zero push number at front and zero at end
#include<stdio.h>
int main()
{
    int arr[] = {0 , 1 , 0 , 3 , 12};
    int n = 5;
    int ans[n];
    int idx = 0;
    printf("\nArray element before swapping : \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d " , arr[i]);
    }

    // push the first element
    for(int i = 0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            ans[idx] = arr[i];
            idx++;
        }
    }

    // fill zero at end
    while(idx != n)
    {
        {
            ans[idx] = 0;
            idx++;
        }
    }

    printf("\nArray element after swapping : \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d " , ans[i]);
    }

    return 0;
}