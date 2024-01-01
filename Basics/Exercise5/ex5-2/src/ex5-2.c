/*
 ============================================================================
 Name        : ex5-2.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,sum=0;
	for(num=0;num<=20;num+=2){
	   sum+= num;
	}
	printf("sum of even numbers to 20:%d\n",sum);
	return 0;
}
