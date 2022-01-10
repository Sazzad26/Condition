#include<stdio.h>
int main()
{
        float n;
        printf("\n Enter your marks - ");
        scanf("%f", &n);
    if(n>85 && n<=100)
        printf("\n Congrats ! you scored 'A+' %f \n", n);
    else if(n>75 && n<=85)
        printf("\n You scored 'A' %f \n", n);
    else if(n>65 && n<=75)
        printf("\n You scored 'B' %f", n);
    else if(n>45 && n<=65)
        printf("\n You scored 'c' %f", n);
    else
        printf("\n Sorry, you are fail", n);
}
