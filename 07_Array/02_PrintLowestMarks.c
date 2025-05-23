// print the lowest marks of the array
#include<Stdio.h>
#include<limits.h>
int main()
{
    int num;
    printf("Enter the size of the array : ");
    scanf("%d" , &num);

    int arr[num];
    for(int i = 0;i<num;i++)
    {
        printf("Enter the marks of %d student : " , i);
        scanf("%d" , &arr[i]);
    }

    printf("Original  array : ");
    for(int i = 0;i<num;i++)
    {
        printf("%d " ,arr[i]);
    }

    // find min
    int min = INT_MAX;
    int idx = 0;
    for(int i = 0;i<num;i++)
    {
        if(arr[i] < min )
        {
            min = arr[i];
            idx = i;
        }
    }

    printf("The lowest marks index : %d" , idx);
    return 0;
}