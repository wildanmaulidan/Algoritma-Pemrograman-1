/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char input[50];
    int i, j;
    printf("masukan kata    : ");
    scanf("%s", input);
    
    j=0;
    for(i=0; i<strlen(input); i++){
        if(j>9){
            j=0;
        }
        if(input[i]=='a' || input[i]=='i' || input[i]=='u' || input[i]=='e' || input[i]=='o'){
            printf("%d", j);
        }
        else{
            printf("%c", input[i]);
        }
        j++;
    }

    return 0;
}
