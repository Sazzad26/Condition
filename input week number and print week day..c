#include<stdio.h>
int main()
{
    int dayes;
    printf("Enter day number[1-7]:");
    scanf("%d",&dayes);
    if(dayes==1)
        printf("It's monday");
    else if(dayes==2)
        printf("It's tuesday ");
    else if(dayes==3)
        printf("It's wednasday");
    else if(dayes==4)
        printf("It's thursday");
    else if(dayes==5)
        printf("It's friday");
    else if(dayes==6)
        printf("It's satarday");
    else if(dayes==7)
        printf("It's sunday");
    else
        printf("The input is invalid");
    return 0;
}
