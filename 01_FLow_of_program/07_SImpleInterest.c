// print the simple interest of the given numbers
#include<Stdio.h>
int main()
{
    int Principle , rate , time;
    printf("Enter the  Principle amount : ");
    scanf("%d", &Principle);
    printf("Enter the rate amount : ");
    scanf("%d" , &rate);
    printf("Enter the time of the duration");
    scanf("%d" , &time);

    float ans = (Principle * rate * time) / 100;
    printf("Amount : %f" , ans);
    return 0;
}