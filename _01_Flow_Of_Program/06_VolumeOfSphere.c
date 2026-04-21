// volume of sphere = 4/3Pie* radius^3

#include<stdio.h>
int main()
{
    float pie = 3.142f;
    int radius;
    printf("Enter the radius : ");
    scanf("%d" , &radius);

    float ans = (4.0/3.0)*pie*radius* radius*radius;
    printf("ans : %f" , ans);
    return 0;
}