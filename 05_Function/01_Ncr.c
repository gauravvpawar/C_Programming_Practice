// find the ncr of the number  = n! / r! (n - r)!
#include<stdio.h>

int fact(int num)
{
    int fact = 1;
    for(int i = 1;i<=num;i++)
    {
        fact = fact *i;
    }

    return fact;
}
int main()
{
    int n , r , nfact , rfact , nrfact;
    printf("Enter the n value : ");
    scanf("%d" , &n);
    printf("Enter the r value : ");
    scanf("%d" , &r);

    nrfact = fact(n-r);
    printf("nr fact : %d \n" , nrfact);
    nfact = fact(n);
    printf("nfact : %d \n" , nfact);
    rfact = fact(r);
    printf("r fact : %d \n" , rfact);
    
    float ans = nfact / (rfact * nrfact);
    printf("Nr Fact : %f" , ans);
    return 0;
}