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
  char input[100];
  int panjang;
  
  scanf("%s", input);
  panjang=strlen(input);
  
  for(int i=panjang; i>panjang/2; i--){
      printf("%c", input[i]);
  }
  
  printf("\n");
  
  for(int i=panjang/2; i>=0; i--){
      printf("%c", input[i]);
  }

}
