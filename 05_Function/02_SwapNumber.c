// swaping number

#include<stdio.h>
int main()
{
    int a = 5 , b = 10;
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("After swapping  : \n");
    // by taking temp variable
    // int temp = a ;
    // a = b;
    // b  = temp;

    a = a + b; // a = 15
    b = a - b; // b = 5
    a = a - b; // a = 10
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    return 0;
}