#include<stdio.h>
int main()
{
    int a, b, c, p;
    scanf(" %d %d %d", &a, &b, &c);
    if(a>b && a>c)
        p=a;
    else if(b>c && b>a)
        p=b;
    else
        p=c;
    printf("\n The largest number is = %d \n", p);
}
