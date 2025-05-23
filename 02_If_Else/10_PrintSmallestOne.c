// print the smallest of one
#include<stdio.h>
int main()
{
    int ram , shyam , ajay;
    printf("Enter the ram age : ");
    scanf("%d" , &ram);
    printf("Enter the shyam age : ");
    scanf("%d" , &shyam);
    printf("Enter the Ajay age : ");
    scanf("%d" , &ajay);

    if(ram > shyam && ram > ajay)
    {
        if(shyam > ajay)
        {
            printf("Ajay is youngest");
        }else{
            printf("Shyam is youngest");
        }
    }else{
        if(ram >  ajay)
        {
            printf("Ajay is youngest");
        }else{
            printf("Ram is youngest.");
        }
    }
    return 0;
}