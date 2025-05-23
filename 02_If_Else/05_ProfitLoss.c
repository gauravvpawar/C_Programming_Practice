// check user had profit or in loss
#include<stdio.h>
int main()
{
    int sellingPrice , costPrice;
    printf("Enter the selling price : ");
    scanf("%d" , &sellingPrice);
    printf("Enter the cost price :");
    scanf("%d" , &costPrice);

    if(costPrice < sellingPrice)
    {
        printf("You are in profit");
    }else{
        printf("You are in loss");
    }
    return 0;
}