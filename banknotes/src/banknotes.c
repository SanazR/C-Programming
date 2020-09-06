/*
 ============================================================================
 Name        : banknotes.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int amount, total;
    amount=375;
    total=amount/100;
    printf ("100: %d\n",total);
    amount=amount-(total*100);
    total=amount/50;
    printf ("50: %d\n",total);
    amount=amount-(total*50);
    total= amount/20;
    printf ("20: %d\n",total);
    amount= amount- ( total*20);
    total= amount/10;
    printf ("10: %d\n",total);
    amount= amount- (total*10);
    total= amount/5;
    printf ("5:%d\n",total);
    amount= amount- (total*5);
    total= amount/2;
    printf ("2:%d\n",total);
    amount= amount- ( total*2);
    total= amount/1;
    printf ("1:%d\n", total);

    return 0;
}


