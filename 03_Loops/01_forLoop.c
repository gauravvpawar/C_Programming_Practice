// for loop 
// take n number from user and print the hello world till n time
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        printf("%d - hello world\n" , i);
    }
    return 0;
}