/*
 ============================================================================
 Name        : snail.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int day (int height)
{

  return (height - 50);
}
int night (int height)
{
 
  return (height + 200);
}

int main(void)
{
 int Day=0;
 int height=0;
 do
   {
     height= night (height);
     if(height>=800)
       {
	 break;
       }
       Day++;
     height= day (height);
   }while(1);
   printf("total day is:%d\n",Day);
    return 0;
}



