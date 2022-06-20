/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n, i;
  scanf ("%d", &n);

  char huruf[n];
  for (i = 0; i < n; i++)
    {
      scanf (" %c", &huruf[i]);
    }
  i = 0;
  while (i < n )
    {
        if(huruf[i]=='a'){
            printf ("Ada huruf a, yang pertama di index ke-%d", i);
        }
      i++;
    }



  return 0;
}
