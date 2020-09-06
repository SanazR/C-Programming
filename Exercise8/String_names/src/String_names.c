/*
 ============================================================================
 Name        : String_names.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

  struct Person
 {
     char *Fname[20];
     char *Lname[20];
};


int main()
{
    char *Fname[20];
    char *Lname[20];
  struct Person name;

  name.Fname[2]=strcpy(&Fname[2],"Sara");
  name.Lname[2]=strcpy(&Lname[2],"White");
  name.Fname[1]=strcpy(&Fname[1],"Mary");
  name.Lname[1]=strcpy(&Lname[1],"Johnson");
  name.Fname[0]=strcpy(&Fname[0],"John");
  name.Lname[0]=strcpy(&Lname[0],"Brown");

   printf("Person 1:%s %s\n",name.Fname[2],name.Lname[2]);
   printf("Person 2:%s %s\n",name.Fname[1],name.Lname[1]);
   printf("Person 3:%s %s\n",name.Fname[0],name.Lname[0]);

    return 0;
}

