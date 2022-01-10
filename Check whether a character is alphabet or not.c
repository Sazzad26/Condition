#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter a alphabet : ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("\n The given character is an alphabet %c \n", ch);
    else
        printf("\n The given number is not alphabet %c \n", ch);

    return 0;
}
