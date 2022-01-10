#include<stdio.h>
int main()
{
        int age;
        printf("\n Enter your age :");
        scanf("%d",&age);
    if(age > 18)
        printf("\n You are eligible for vote \n", age);
    else
        printf("\n Sorry you arn't eligible for vote \n", age);
}
