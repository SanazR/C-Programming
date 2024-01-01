/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int x1=2,y1=5,y2=10,xt,yt;
    signed int x2=-4;
    float D;
    xt=(x2-x1)*(x2-x1);
    yt=(y2-y1)*(y2-y1);
    D= sqrt(xt+yt);
    printf("point 1=(%d,%d)\nPoint 2=(%d,%d)\nD= %f\n",x1,y1,x2,y2,D);
    return 0;
}
