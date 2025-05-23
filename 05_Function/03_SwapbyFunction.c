// swap those number by function
#include<stdio.h>
void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5 , b = 10;
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    swap(&a ,&b);
    printf("After swapping  : \n");
    
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    return 0;
}