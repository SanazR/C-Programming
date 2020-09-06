#include <stdio.h>

int
main ()
{
  float amount[6] = { 35.90, 27.30, 247.30, 12.83, 35.75, 785.23 };
  int indextetri[6];
  int indexlari[6];
  int larisum[9] = { 0 };
  int tetrisum[6] = { 0 };

  int lari[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
  int tetri[6] = { 50, 20, 10, 5, 2, 1 };

  int i,j,k,temp = 0;

  for ( i = 0; i < 6; i++)
    {
      temp = 100 * amount[i];
      indextetri[i] = temp % 100;
      indexlari[i] = amount[i] - (indextetri[i] / 100);
    }



  for ( i = 0; i < 6; i++)
      for ( j = 0; j < 9; j++)
	{
	  temp = indexlari[i] / lari[j];
	  larisum[j] += temp;
	  indexlari[i] %= lari[j];
	}


  for ( i = 0; i < 6; i++)
      for ( j = 0; j < 6; j++)
	{
	  temp = indextetri[i] / tetri[j];
	  tetrisum[j] += temp;
	  indextetri[i] %= tetri[j];
	}


printf("\nlari sum: ");
for( k=0 ; k<6 ; k++)
printf("%d ", larisum[k]);

printf("\ntetri sum: ");
for( k=0 ; k<6 ; k++)
printf("%d ", tetrisum[k]);

  return 0;
}
