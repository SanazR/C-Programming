/*
 ============================================================================
 Name        : Sizeof_variables.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*reference: https://tekslate.com/explain-different-types-pointers-c-language
             https://www.ibm.com/support/knowledgecenter/en/SSFKSJ_9.1.0/
                   com.ibm.mq.ref.dev.doc/q104610_.htm
             https://fresh2refresh.com/c-programming/c-array/  */


# include <stdio.h>
int main ()
{

  /* All types of char */
  unsigned char a;
  signed char b;
  short c;

  /* All types of int */
  short int d;
  unsigned int e;
  signed int f;
  long int g;

  float h;
  double i;
  long double j;


  /* Different types of array*/
  char names[20];
  int ave[20];
  int array [2][2];

  enum first_six_months
  {
      Jan,Feb,March,April,May,June

  };

  void Time(int min, int sec)
  {
      min= sec/60;
  };

  /* Different types of pointer */
  char *k;
  int *L;
  float *m;
  double *n;

printf (" Size of a: %ld\n", sizeof (a));
printf (" Size of b: %ld\n", sizeof (b));
printf (" Size of c: %ld\n", sizeof (c));
printf("\n");

printf (" Size of d: %ld\n", sizeof (d));
printf (" Size of e: %ld\n", sizeof (e));
printf (" Size of f: %ld\n", sizeof (f));
printf (" Size of g: %ld\n", sizeof (g));
printf("\n");

printf (" Size of h: %ld\n", sizeof (h));
printf (" Size of i: %ld\n", sizeof (i));
printf (" Size of j: %ld\n", sizeof (j));
printf("\n");

printf (" Size of names: %ld\n", sizeof (names[20]));
printf (" Size of ave: %ld\n", sizeof (ave[20]));
printf (" Size of array: %ld\n", sizeof ( array[100][100]));
printf("\n");

printf (" Size of first_six_months: %ld\n", sizeof (enum first_six_months));
printf (" Size of Time: %ld\n", sizeof (Time));
printf("\n");

printf (" Size of j_pointer: %ld\n", sizeof (k));
printf (" Size of k_pointer: %ld\n", sizeof (L));
printf (" Size of L_pointer: %ld\n", sizeof (m));
printf (" Size of m_pointer: %ld\n", sizeof (n));

return 0;
}

