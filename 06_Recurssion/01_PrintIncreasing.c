// print the increasing number
#include<stdio.h>
void printNum(int num)
{
    if(num == 0)
    {
        return;
    }

    printNum(num-1);
    printf("%d\n" , num);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    printNum(num);
    return 0;
}