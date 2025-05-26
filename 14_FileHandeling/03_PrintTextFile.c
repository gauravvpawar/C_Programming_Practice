// to print the text from file
#include<stdio.h>
int main()
{
    // accessing file
    FILE *file = fopen("Demo.txt" , "r");
    char str[100];

    // printing the character from file
    while(fgets(str, 100 , file) != NULL)
    {
        printf("%s" , str);
    }

    fclose(file);
    return 0;
}