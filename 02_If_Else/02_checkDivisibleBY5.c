// check the given number is divisible by 5
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    if(num % 5 == 0)
    {
        printf("Divisible by 5");
    }else{
        printf("Not divisible by 5");
    }
    return 0;
}