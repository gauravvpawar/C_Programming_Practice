// basic define of structure and take the value in the structure variable
// structure is user define data type
#include<stdio.h>
#include<string.h>
int main()
{
    // define structure
    struct Employee{
        int id;
        char name[50];
        float salary;
    };

    // to create the varible of that data type
    struct Employee Emp1;
    printf("Enter the first Employee roll no : ");
    scanf("%d" , &Emp1.id);
    printf("Enter the first Employee name : ");
    char name[100];
    scanf("%s" , name);
    strcpy(Emp1.name , name);
    printf("Enter the salary Employee : ");
    scanf("%f" , &Emp1.salary);

    printf("Employee first : \n");
    printf("Emp 1 id : %d \n" ,Emp1.id );
    printf("Emp 1 name : %s \n" ,Emp1.name );
    printf("Emp 1 salary : %f \n" ,Emp1.salary );

    return 0;
}