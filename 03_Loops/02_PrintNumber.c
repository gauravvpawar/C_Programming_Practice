// take number from user and print the number
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    for(int i =1 ;i<=num;i++)
    {
        printf("%d\n" , i);
    }
    return 0;
}