// memoery creation for integer without the integer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of memory : ");
    scanf("%d" , &n);
    int *ptr = (int * )malloc(4 * n);
    // int *p = ptr;

    // take the input for integer
    for(int i = 0;i<n;i++)
    {
        printf("Enter the %d value : \n", i );
        scanf("%d" , &ptr[i]);
    }

    // printing the value of malloc memory number
    for(int i = 0;i<n;i++)
    {
        printf("%d \n" , ptr[i]);
    }

    free(ptr);
    return 0;
}