#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d", &n);
    if(n%2==0)
        printf("\n The number is even %d \n", n);
    else
        printf("\n The number is odd %d \n", n);
    return 0;
}
