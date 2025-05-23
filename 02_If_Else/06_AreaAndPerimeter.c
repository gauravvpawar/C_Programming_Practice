// check the area of reactangle is greater than the perimeter or not
#include<stdio.h>
int main()
{
    int length,breadth;
    printf("Enter the length : ");
    scanf("%d" , &length);
    printf("Enter the breadth : ");
    scanf("%d" , &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if(area > perimeter)
    {
        printf("Area = %d of rectangle is greater than the perimeter = %d." , area , perimeter);
    }else{
        printf("Perimeter = %d of the rectangle is greater than the area = %d." , area , perimeter);
    }
    return 0;
}