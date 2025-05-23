// string place add character
#include<stdio.h>
int main()
{
    char str[20] = "college";
    printf("%s" , str);

    for(int i = 6;i>=2;i--)
    {
        str[i + 1] = str[i];
    }

    str[2] = 'l';
    
    return 0;
}