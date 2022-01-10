#include<stdio.h>
int main()
{
    int a, b, c;
        printf(" \n Enter the value of a, b and c");
        scanf ("%d %d %d", &a, &b, &c);
     if(a>b &&a>c)
        printf(" \n The large number is : %d \n", a);
     else if(b>c && b>a)
        printf(" \n The large number is : %d \n", b);
     else
        printf(" \n The large number is : %d \n", c);

}
