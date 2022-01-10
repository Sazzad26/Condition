#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("\n Enter the name of month: ");
    scanf("%s", &name);
    if(name=="January" || name=="March" || name=="May" || name=="July" || name=="Agust" || name=="October" || name=="December")
    {
        printf("\n The month is 31 days %s", name);
    }
    else if(name=="April" || name=="Jun" || name=="September" || name=="November")
    {
        printf("\n The month is 30 days %s", name);
    }
    else if(name=="February")
    {
        printf("\n The month is 28 days if leap year then it will be 29 days %s", name);
    }
    else
    {
        printf("\n The entered input is invalid %s", name);
    }

    return 0;
}
