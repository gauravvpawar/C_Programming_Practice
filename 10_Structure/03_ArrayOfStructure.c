// print the array of structure
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct Cricketer{
        char name[50];
        int age;
        int numberOfMatch;
        float avgScore;
    }Cricketer;

    int num;
    printf("Enter the size of cricketer : ");
    scanf("%d" , &num);

    Cricketer arr[num];

    for(int i = 0;i<num;i++)
    {
        printf("Enter the name %d of crickter : " , i);
        char name[50];
        scanf("%s", &name);
        strcpy(arr[i].name , name);
        printf("Enter the Age %d of crickter : " , i);
        scanf("%d" , &arr[i].age);
        printf("Enter the Number of test match of %d cricketer : ", i);
        scanf("%d", &arr[i].numberOfMatch);
        printf("Enter the Average score of match : ");
        scanf("%f" , &arr[i].avgScore);
    }

    printf("You enter the given cricketer value : \n");
    for(int i = 0;i<num;i++)
    {
        printf("%s \n" , arr[i].name);
        printf("Age : %d\n" , arr[i].age);
        printf("Test Match : %d\n" , arr[i].numberOfMatch);
        printf("Average score : %d\n", arr[i].avgScore);
    }
    return 0;
}