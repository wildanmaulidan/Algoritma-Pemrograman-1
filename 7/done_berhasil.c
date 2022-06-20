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
  char nama[100];
  char tampung[100];
  int lengthmax=0;
  int comp;
    
    do{
        scanf("%s", nama);
        comp=strcmp(nama, "done");
        if(lengthmax<=strlen(nama)){
            lengthmax=strlen(nama);
            strcpy(tampung,nama);
        }
    }while(comp!=0);
    
    printf("String terpanjang adalah %s, dengan panjang %d\n", tampung, lengthmax);

  return 0;
}
