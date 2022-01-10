#include<stdio.h>
int main()
{
        float a, b, c;
        printf(" \n Enter the value of a, b and c");
        scanf(" %f %f %f", &a, &b, &c);
    {
     if(a>b && a>c)
        printf("\n The largest number is : %f \n", a);
    }
    {
     if(b>a && b>c)
        printf("\n The largest number is : %f \n", b);
    }
    {
     if(c>b && c>a)
        printf("\n The largest number is : %f \n", c);
    }
    {
     if(a==b && a==c)
         printf("\n All number are equal \n ");
    }
}
