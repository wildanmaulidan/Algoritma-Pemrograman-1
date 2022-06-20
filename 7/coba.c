/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int
main ()
{
  char nama[6];
  char nama2[6];

  scanf ("%s", nama);
  printf ("Inputan : %s\n", nama);
  int length = strlen (nama);
  printf ("Panjangnya : %d\n", length);

  printf ("=====================================\n");

  scanf ("%s", nama2);
  printf ("Inputan : %s\n", nama2);
  int length2 = strlen (nama2);
  printf ("Panjangnya : %d\n", length2);

  printf ("=====================================\n");

  strcpy (nama, nama2);
  printf ("Nama pertama sudah berubah menjadi : %s", nama);
  return 0;
}
