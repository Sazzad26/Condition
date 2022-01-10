#include<stdio.h>
int main()
{
    int y;
    printf("\n Enter the value of y:");
    scanf("%d", &y);
    if(y%400==0)
        printf("\n Enter the year is leap year \n", y);

    else if(y%100==0)
        printf("\n Enter the year is not leap year \n", y);
    else if(y%4==0)
        printf("\n Enter the year is leap year \n", y);

    else
        printf("\n Enter the year is not leap year \n", y);
    return 0;
}
