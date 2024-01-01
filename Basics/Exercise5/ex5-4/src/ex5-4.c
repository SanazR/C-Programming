/*
 ============================================================================
 Name        : ex5-4.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	for(i=1;i<=10;i++){
	    for(j=1;j<=10;j++)
	      printf(",%d",i*j);
	    if(i<10){
		printf("\t");
	    }
	    printf("\n");
	    	}
	return 0;
}
