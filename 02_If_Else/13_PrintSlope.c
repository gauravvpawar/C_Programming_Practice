// check weather the points lie on the same points or not
#include<stdio.h>
int main()
{
    int x1 , x2 , x3 , y1 , y2 , y3;
    printf("Enter the first slope x1 points : ");
    scanf("%d" , &x1);
    printf("Enter the first slope y1 points :  ");
    scanf("%d" , &y1);

    printf("Enter the second slope x2 points : ");
    scanf("%d" , &x2);
    printf("Enter the second slope y2 points :  ");
    scanf("%d" , &y2);

    printf("Enter the third slope x3 points : ");
    scanf("%d" , &x3);
    printf("Enter the third slope y3 points :  ");
    scanf("%d" , &y3);

    float m1 , m2;
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if(m1 == m2)
    {
        printf("Points lie on the straight");
    }else{
        printf("Points does not lie on the straight");
    }
    return 0;
}