#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter a character: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U')
    {
      printf("\n The character is a vowel: %c",ch);
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))

    {
        printf("\n The character is a consonant: %c",ch);
    }
    else
        printf("\n The character is not consonant or vowel: %c",ch);

    return 0;
}
