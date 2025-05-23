// take two number and print the largest of it
#include<Stdio.h>
int main()
{
    int a , b;
    printf("Enter the first number : ");
    scanf("%d" , &a);
    printf("Enter the second number : ");
    scanf("%d" , &b);

    if(a > b)
    {
        printf("a = %d is greater" ,a);
    }else{
        printf("b = %d is greater" , b);
    }
    return 0;
}