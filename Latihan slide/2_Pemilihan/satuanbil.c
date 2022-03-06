#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    if(x>=1000){
        printf("Angka yang dimasukan bernilai ribuan\n");
    }
    else if(x>=100){
         printf("Angka yang dimasukan bernilai ratusan\n");
    }
    else if(x>=10){
         printf("Angka yang dimasukan bernilai puluhan\n");
    }
    else if(x>=1){
         printf("Angka yang dimasukan bernilai satuan\n");
    }
    else{
        printf("Angka yang dimasukan bernilai lebih kecil dari satu\n");
    }


    return 0;
}