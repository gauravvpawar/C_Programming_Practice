// print the grade on the marks
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d" , &marks);

    if(marks >90 && marks <=100)
    {
        printf("Excellent");
    }else if(marks>80 && marks <=90)
    {
        printf("Very Good");
    }else if(marks>70 && marks <=80)
    {
        printf("Good");
    }else if(marks>60 && marks <=70)
    {
        printf("Can do better");
    }else if(marks>50 && marks <=60)
    {
        printf("Average");
    }else if(marks>40 && marks <=50)
    {
        printf("Below Average");
    }else{
        printf("Fail");
    }
    return 0;
}