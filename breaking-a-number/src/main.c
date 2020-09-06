/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=1253,b,c,d,e;
    b= a/1000;
    c=(a%1000)/100;
    d=((a%1000)%100)/10;
    e=((a%1000)%100)%10;
    printf("a include %d notes of 1000,\n",b);
    printf("a include %d notes of 100,\n",c);
    printf("a include %d notes of 10,\n",d);
    printf("a include %d notes of 1,\n",e);

    return 0;
}
