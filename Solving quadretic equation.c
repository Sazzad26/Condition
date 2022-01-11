#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, x, y, x1, x2;
    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a!=0.0){
        d = b*b-4*a*c;
        if(d==0){
            x = -b/(2*a);
            printf("The value of x is = %.3f", x);
        }
        else if(d>0){
            x1 = (-b + sqrt(d))/(2*a);
            x2 = (-b - sqrt(d))/(2*a);
            printf("The value of X1 is = %.3f and X2 is = %.3f", x1, x2);
        }
        else if(d<0){
            d = d*(-1);
            x = -b /(2*a);
            y = sqrt(d)/(2*a);
            printf("%.3f + i %.3f \n", x, y);
            printf("%.3f - i %.3f \n", x, y);
        }
        else
            printf("Invalid input");

    }

    return 0;
}
