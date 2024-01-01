/*
 ============================================================================
 Name        : ex5-1.c
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
	for(num=1,sum=0;num<=10;num++)
	  {
	  sum += num;
	  }
	printf("sum of 1-10 is:%d\n",sum);
	return 0;
}
