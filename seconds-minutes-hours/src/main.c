/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Totals=5240,s,m,h;
    h=Totals/3600;
    m=(Totals%3600)/60;
    s=(Totals%3600)%60;
    printf("Total seconds= %d\nHours= %d\nMinutes= %d\nSeconds= %d\n",Totals,h,m,s);

    return 0;
}
