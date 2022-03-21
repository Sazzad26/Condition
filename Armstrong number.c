#include<stdio.h>
int main()
{
    int number, a, temp, sum=0;
    printf(" Enter the number: ");
    scanf("%d", &number);
    temp=number;
    while(temp>0){
    a = temp%10;
    sum = sum+(a*a*a);
    temp = temp/10;
    }
    printf("%4d\n", sum);
    if(sum==number){
    printf(" Armstrong ");
    }
    else{
        printf(" Not armstrong ");
    }
    return 0;
}
