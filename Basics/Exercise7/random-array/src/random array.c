/*
 ============================================================================
 Name        : random.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
unsigned int ar[100],arindexI,arindexJ,count=0;


srand(time(NULL));
ar[100]=rand();
for(arindexI=0;arindexI<20;arindexI++)
{

    for(arindexJ=arindexI+1;arindexJ<20;arindexJ++)
    {

            if(ar[arindexI]==ar[arindexJ])
            {
                count=count+1;
                printf("The number %d:%d\n",arindexI,count);
                break;
            }
            else
              {
        	printf("The number %d:%d\n",arindexI,count);
        	    break;
              }
    }
}
printf("\n");
return 0;
}
