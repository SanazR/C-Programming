/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=125,b=12345;
    short int s=4043;
    long ax=1234567890,ux=2541567890;
    float x=2.13459;
    double dx=1.141592;
    char c='W';
    printf("a+c = %d\nx+c = %f\ndx+x = %e\ndx+ax = %d\na+x = %f\ns+b = %d\nax+b = %Ld\n",a+c,x+c,
    dx+x,((int)dx)+ax,a+x,s+b,ax+b);
    printf("s+c = %hd\nax+c = %Ld\nax+ux = %Ld\n",s+c,ax+c,ax+ux);

    return 0;
}
