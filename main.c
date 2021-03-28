#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount,total_coin,coins[500],coin_nedded,i,count,T=0;

    printf("Total amount for coin changing :: ");
    scanf("%d",&amount);
    printf("\nTotal number of given coin :\n");
    scanf("%d",&total_coin);
    printf("\nEnter the value in descending order :\n");
    for(i=1;i<=total_coin;i++)
    {
        scanf("%d",&coins[i]);
    }

    for(i=1;i<=total_coin;i++)
    {
        if(coins[i]<=amount)
        {
            coin_nedded=amount/coins[i];
            printf("\n%d coins of %d taka",coin_nedded,coins[i]);
            amount=amount-(coin_nedded*coins[i]);

            count=coin_nedded;
            T=T+count;
        }

    }
    printf("\nTotal number of coin %d\n",T);

    return 0;
}
