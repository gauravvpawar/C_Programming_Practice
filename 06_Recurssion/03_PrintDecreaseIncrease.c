// print the number in decrease as well as the increase
#include<stdio.h>
void both(int num)
{
    if(num == 0)
    {
        return;
    }

    printf("%d\n" , num);
    both(num-1);
    printf("%d\n" , num);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    both(num);
    return 0;
}