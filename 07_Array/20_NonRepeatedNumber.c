// find the non repeated number in the given array : 
// https://leetcode.com/problems/single-number-iii/

#include<stdio.h>
int main()
{
    int arr[7] = {1 , 2 , 3 , 4, 3,2 ,1};

    
    for(int i = 0;i<7;i++)
    {
        int flag = 1;
        for(int j = i + 1;j<7;j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 0;
            }
        }
        
        if(flag)
        {
            printf("%d number is single" , arr[i]);
            break;
        }
    }
    return 0;
}