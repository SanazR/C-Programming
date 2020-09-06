/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=8,b=5,c=10;
    
     if (a >= b && a >= c) 
        printf("%d is the largest number.", a); 
  
    if (b >= a && b >= c) 
        printf("%d is the largest number.", b); 
  
    if (c >= a && c >= b) 
        printf("%d is the largest number.", c); 
    

    return 0;
}


