// to store the pointers variable at one line
#include<stdio.h>

int main()
{
    int x = 5, y = 10;
    // int* a = &x;
    // int* b = &y; you can easily assign from this 

    int *a = &x , *b = &y;

    printf("a : %p \n" , a);
    printf("b : %d" , *b);

    return 0;
}