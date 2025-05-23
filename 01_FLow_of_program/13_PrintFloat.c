// take the float  input and print the fractional part of ot
#include<stdio.h>
int main()
{
    float num;
    printf("Enter the number : ");
    scanf("%f" , &num);

    int temp = num;
    float ans = num - temp;

    printf("Fractional number : %f" ,ans);
    return 0;
}