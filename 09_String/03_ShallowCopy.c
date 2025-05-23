// shallow copy it change the variable or the string value easily
#include<stdio.h>
int main()
{
    char name[] = "hello";
    char *ptr = name;
    ptr[0] = 'm';
    printf("%s" , name);
    return 0;
}