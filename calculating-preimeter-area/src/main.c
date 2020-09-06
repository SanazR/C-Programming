/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int P,A,L=7,W=5;/*Regtangle*/
    int R=6;/*Circle*/
    float PI=3.14,Pcircle,Acircle;
    P=2*(L+W);
    A=L*W;
    Pcircle=PI*2*R;
    Acircle=PI*R*R;
    printf("Rectangle Perimeter = %d inches\nRectangle Area = %d inches\n",P,A);
    printf("Circle Perimeter = %f inches\nCircle Area = %f inches\n",Pcircle,Acircle);

    return 0;
}
