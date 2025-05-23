// reverse the string
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter the name : ");
    scanf("%s" , &name);
    printf("original string : %s \n" , name);

    // to print the string in the reverse format
    // for(int i = strlen(name);i>=0;i--)
    // {
        // printf("%c ", name[i]);
    // }

    int i = 0 , j = strlen(name) -1;
    while(i < j)
    {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }

    printf("after changes : %s " , name);
    return 0;
}