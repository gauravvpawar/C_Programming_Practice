// print the alphabetic and numberic pattern
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        int CharStart = 65;
        for(int j = 1;j<=i;j++)
        {
            if(i%2 != 0)
            {
                printf("%d" , j);
            }else{
                printf("%c" , CharStart);
                CharStart++;
            }
        }
        printf("\n");
    }
    return 0;
}