/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal UAS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"            //memanggil library header.h

int main(){                    //fungsi utama program
    int n;                     //deklarasi variabel banyak kata
    scanf("%d", &n);           //meminta inputan banyak kata
    char katain[n][100];          //deklarasi array of string sebanyak n
    for(i=0; i<n; i++){        //for loop sebnyak n
        scanf("%s", katain[i]);   //meminta inputan string
    }

    char cari[50];             //deklarasi array of char     
    scanf("%s", cari);         //meminta inputan kata yang ingin dicari
    printf("%d\n", hitung(n, katain, cari));//menampilkan hasil dan memanggil fungsi hitung

    return 0;                  //menyatakan bahwa program berakhir dengan normal
}