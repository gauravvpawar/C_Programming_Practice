// for the understandance of pre in post
#include<stdio.h>
void prePost(int num)
{
    if(num == 0)
    {
        return;
    }

    printf("pre - %d\n" , num);
    prePost(num-1);
    printf("In - %d\n" , num);
    prePost(num-1);
    printf("Post - %d\n" , num);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    prePost(n);
    
    return 0;
}