// find the missing number in the array
#include<stdio.h>
int missingNumber(int* nums, int numsSize) {
    int sum1 = (numsSize*(numsSize+1))/2;
    int sum2 = 0;
    for(int i = 0;i<numsSize;i++)
    {
        sum2 += nums[i];
    }
    int ans = sum1 - sum2;

    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 0};
    int ans = missingNumber(arr , 5);
    printf("%d", ans);
    return 0;
}