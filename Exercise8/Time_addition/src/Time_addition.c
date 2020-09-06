/*
 ============================================================================
 Name        : Time_addition.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 /*reference: https://www.quora.com/
   What-is-the-difference-between-2d-and-02d-in-C-language-What-is-the-logic/
   https://www.quora.com/What-does-4D-mean-in-C */

#include <stdio.h>
#include <time.h>

struct Time
{
    int sec;
    int min;
    int h;
    int day;
    int month;
    int year;
};

struct Time Addition(struct Time Absolute,struct Time Relative)
   {

      struct Time Sum;
      Sum.sec= Absolute.sec + Relative.sec;
        if (Sum.sec>=60)
        {
            Sum.min+=1;
            Sum.sec= Sum.sec - 60;
        }

      Sum.min= Absolute.min + Relative.min;
         if (Sum.min>=60)
         {
             Sum.h+=1;
             Sum.min= Sum.min - 60;
         }

      Sum.h= Absolute.h + Relative.h;
         if (Sum.h>=24)
         {
             Sum.day+=1;
             Sum.h= Sum.h - 24;
         }

      Sum.day= Absolute.month + Relative.month;
          if (Sum.month>=12)
          {
              Sum.year+=1;
              Sum.month= Sum.month - 12;
          }
      Sum.month= Absolute.day + Relative.day;
          if ((Sum.month==2) && (Sum.day>=28))
          {
              Sum.month+=1;
              Sum.day= Sum.day - 28;

          }
          if ((Sum.month==4||Sum.month==6||Sum.month==9||Sum.month==11) && (Sum.day>=30))
          {
              Sum.month+=1;
              Sum.day= Sum.day - 30;

          }
          else
          {
              if(Sum.day>=31)
              {
                  Sum.month+=1;
                  Sum.day= Sum.day - 31;

              }
          }
       Sum.year= Absolute.year + Relative.year;
           if (Sum.year% 4==0 )
      {
          if((Sum.month==2) && (Sum.day>=29))
          {
              Sum.month+=1;
              Sum.day= Sum.day - 29;

          }
      }
          return Sum;
   }

   int main()
   {
       struct Time Sum;
       struct Time Absolute={02,10,11,22,10,2004};
       struct Time Relative={15,40,00,05,00,0000};

        Sum= Addition(Absolute,Relative);

        printf("(%02d/%02d/%04d)  %02d:%02d:%02d + (%02d/%02d/%04d)  %02d:%02d:%02d = ",Absolute.day,
	     Absolute.month,Absolute.year,Absolute.h,Absolute.min,Absolute.sec,
             Relative.day,Relative.month,Relative.year,Relative.h,
             Relative.min,Relative.sec);
        printf("\n");
        printf("(%02d/%02d/%04d)  %02d:%02d:%02d",Sum.day,Sum.month,Sum.year,Sum.h,Sum.min,Sum.sec);
        printf("\n");

       return 0;

  }


