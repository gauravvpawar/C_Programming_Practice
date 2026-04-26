// check the given number is prime number or not
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int flag = 1;
    for(int i = 2;i<=(num/2);i++)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }


    if(flag)
    {
        printf("Number is prime.");
    }else{
        printf("Given number is not prime");
    }
    return 0;
}