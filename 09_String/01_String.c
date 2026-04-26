// to print and take input of string
#include<stdio.h>
#include<string.h>
int main()
{
    char name1[] = {'h' , 'e' ,'l','l' ,'o' ,'\0'};
    printf("%s\n" , name1);

    char naam[] = "Hello"; // it default add the null character
    printf("%s" , naam);

    char username[100];
    printf("Enter the username : \n");
    gets(username);
    puts(username);

    // if you want also the large input string
    char greeting[200];
    printf("Enter the greeting : ");
    scanf("%[^\n]s" , greeting);
    printf("%s",greeting);
    return 0;
}