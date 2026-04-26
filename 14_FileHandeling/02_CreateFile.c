// create file and write some text file on that file
#include<stdio.h>
int main()
{
    FILE *file = fopen("Demo.txt" , "w");
    char str[100] = "Hi. My name is Gaurav \n I am student \n I learn about the file handeling";

    //copy the str char array to demo file
    fputs(str, file);

    // after write on the file to access the file and 
    fclose(file);

    return 0;
}