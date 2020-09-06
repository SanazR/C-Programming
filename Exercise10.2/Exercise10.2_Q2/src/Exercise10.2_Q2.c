/*
 ============================================================================
 Name        : 2_Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char *sentence  = (char*)malloc(100 *sizeof (char));
    char *Print = sentence;
    do
    {
        scanf("%c", sentence);
    } while (*sentence++ != '-');

    while(*Print != '-')
    {
    printf("%c", *Print);
    *Print++;
    }
    printf("\n");

    return 0;
}
