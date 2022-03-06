#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    scanf("%s", str);

    int i, jumlah=0;
    for(i=0; i<strlen(str); i++){
        if(str[i]>=48 && str[i]<=57){
            jumlah++;
        }
    }

    printf("Jumlah char angka = %d\n", jumlah);

    return 0;

}