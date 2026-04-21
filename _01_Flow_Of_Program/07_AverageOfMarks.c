// take 5 subject marks and print the average of 5 subject
#include<stdio.h>
int main()
{
    int m1 ,m2 , m3, m4 , m5;
    printf("Enter the Subject 1 marks : ");
    scanf("%d",&m1);

    printf("Enter the Subject 2 marks : ");
    scanf("%d",&m2);

    printf("Enter the Subject 3 marks : ");
    scanf("%d" ,&m3);

    printf("Enter the Subject 4 marks : ");
    scanf("%d" , &m4);

    printf("Enter the Subject 5 marks : ");
    scanf("%d" , &m5);

    float average = (m1 + m2 + m3 + m4 + m5 )/ 5;
    printf("Average of 5 Subject : %f", average);
    return 0;
}