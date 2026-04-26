// some built in method in c
#include<stdio.h>
#include<string.h>

int main()
{
    char username[] = "gaurav";
    char lastname[] = "pawar";
    char name[20];
    strcat(username , lastname);
    printf("%s \n" , username);
    printf("%s \n" , lastname);
    printf("%s \n" , name);
    return 0;
}