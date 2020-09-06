/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Tdays=1329;
    int years;
    int days;
    int weeks;
    years=1329/365;
    weeks= (1329%365)/7;
    days=Tdays-((years*365)+(weeks*7));
    printf("1329 day =\n Years = %d Weeks = %d Days = %d\n",years,weeks,days);

    return 0;
}
