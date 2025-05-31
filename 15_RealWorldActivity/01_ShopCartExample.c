//  shopping cart example
#include<stdio.h>
int main()
{
    char item[50];
    float price;
    int count;
    float total;
    char currency = '$';

    printf("Enter the name of item would you  like to buy : \n");
    scanf("%s" , item);
    printf("Enter the price of the item : \n");
    scanf("%f" , &price);
    printf("Enter the count of the item : \n");
    scanf("%d" , &count);

    total = price * count;
    printf("You bought %d %s \n" , count , item);

    printf("Totol amount %c : %.2f" , currency , total);


    return 0;
}