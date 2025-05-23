// print the number from 1 to 100 print the odd number
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number  : ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        printf("%d " , i);
    }
    return 0;
}