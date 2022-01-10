/* Write a C program
to calculate profit or loss*/

#include<stdio.h>
int main()
{
    int buy, sell, amt;
    printf("Enter buying amount: ");
    scanf("%d", &buy);
    printf("Enter selling amount: ");
    scanf("%d", &sell);
    amt=(sell-buy);
    if(amt>0)
        {
            printf("\n Profit %d taka \n", amt);
        }
    else if(amt<0)
       {
            printf("\n Loss %d taka \n", amt);
       }

    else
    {
        printf("\n Your buying and selling amount is equal\n");
    }

    return 0;
}
