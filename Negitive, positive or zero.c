#include<stdio.h>
int main()
{
    float n;
    printf("\n Enter the number: ");
    scanf("%f", &n);
    if(n>0)
        printf("\n The given number is positive %.2f\n",n);
    else if(n<0)
        printf("\n The given number is negative %.2f\n",n);
    else
        printf("\n The given number is zero %.2f\n",n);

    return 0;
}
