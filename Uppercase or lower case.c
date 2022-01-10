#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
        printf("\n %c is uppercase\n", ch);
    else if(ch>='a' && ch<='z')
        printf("\n %c is lowercase\n", ch);
    else
        printf("\n %c is not an alphabet\n", ch);

    return 0;
}
