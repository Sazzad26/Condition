#include<stdio.h>
int main()
{
    int month, days;
    printf("\n Enter days: ");
    scanf("%d", &days);
    month= days/30;
    days= days%30;
    printf("\n %d month %d days", month, days);

    return 0;
}
