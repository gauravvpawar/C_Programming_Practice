// print the ways of tower of hanoi
#include<stdio.h>
void tower(int num , char S , char H , char D)
{
    if(num == 0)
    {
        return;
    }

    tower(num-1 , S , D , H);
    printf("%c -  %c\n" ,S , D);
    tower(num-1 , H , S , D);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    tower(num , 'A' , 'B' , 'C');
    return 0;
}