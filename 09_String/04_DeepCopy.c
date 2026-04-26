// deep copy of the string it does not easily change
#include<stdio.h>
int main()
{
    char name1 = "hello";
    char name2 = "world";

    printf("%s" , name1);
    printf("%s" , name2);
    char *ptr = name1;
    ptr = "my";
    
    printf("%s" , name1);
    printf("%s" , name2);
    return 0;
}