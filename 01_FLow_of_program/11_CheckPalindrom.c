// check the given string palindrom or not
#include<Stdio.h>
#include<String.h>
int main()
{
    char name[10];
    printf("Enter the string : ");
    scanf("%s", name);
    int check = 1;

    for(int i = 0,j = strlen(name)-1;i<=j;i++ , j--)
    {
        if(name[i] != name[j])
        {
            check = 0;
            break;
        }
    }

    if(check)
    {
        printf("Givev String is palindrome.");
    }else{
        printf("Given string is not palindrome.");
    }
    return 0;
}