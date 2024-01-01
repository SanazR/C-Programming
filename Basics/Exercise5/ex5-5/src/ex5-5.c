/*
 ============================================================================
 Name        : ex5-5.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float rate=0.02,money=100;
	int year=0;
	do{
	    printf("%d money:%f\n",year++,money);
	    money+=(rate*money);
	    }while(money<200);
	printf("%d money:%f\n",year++,money);
	return 0;
}
