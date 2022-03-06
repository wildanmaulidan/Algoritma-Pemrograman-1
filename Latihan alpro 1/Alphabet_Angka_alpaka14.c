#include<stdio.h>

int main(){
    char input[6];
    int i;
    char hasil[6];
    int val=0;
    for(i=0; i<6; i++){
        scanf(" %c", &input[i]);
        if(input[i]>=48 && input[i]<=57){
            val++;
        }
        else if((input[i]>=65 && input[i]<=90)||(input[i]>=97 && input[i]<=122)){
            val--;
        }
    }


    int indexalphabet=0;
    int indexangka=1;
    if(val==0){
        for(i=0; i<6; i++){
            if((input[i]>=65 && input[i]<=90)||(input[i]>=97 && input[i]<=122)){
                hasil[indexalphabet]=input[i];
                indexalphabet+=2;
            }
            else if(input[i]>=48 && input[i]<=57){
                hasil[indexangka]=input[i];
                indexangka+=2;
            }
        }
        for(i=0; i<6; i++){
            printf("%c\n", hasil[i]);
        }
    }
    else{
        printf("tidak valid\n");
    }


    return 0;
}