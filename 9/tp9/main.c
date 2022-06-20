/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP9 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"         //memanggil library header.h

int main(){                 //fungsi utama program
    char nama_bos[50];      //deklarasi array of char sepanjang 50 untuk menampung nama bos
    char elemen_bos[50];    //deklarasi array of char sepanjang 50 untuk menampung elemen bos
    char jurus_bos[50];     //deklarasi array of char sepanjang 50 untuk menampung jurus bos
    int power_bos=0;        //deklarasi integer untuk menampung kekuatan bos
    scanf("%s%s%s", nama_bos, elemen_bos, jurus_bos);   //meminta inputan nama, elemen dan jurs bos
//-------------------------------------------------------------------------------
    int n;                       //deklarasi integer n untuk jumlah karakter
    scanf("%d", &n);            //meminta inputan nilai n
    char nama_warrior[n][50];   //deklarasi array of string sepanjang 50 untuk menampung nama karakter
    char elemen_warrior[n][50]; //deklarasi array of string sepanjang 50 untuk menampung elemen karakter
    char jurus_warrior[n][50];  //deklarasi array of string sepanjang 50 untuk menampung jurus karakter
    int power_warrior[n];       //deklarasi array of integer sepanjang n untuk menampung kekuatan karakter
    for(i=0; i<n; i++){         //for lood sebanyak n
        power_warrior[i]=0;     //isi awal seriap kekuatan karakter bernilai 0
        scanf("%s%s%s", nama_warrior[i], elemen_warrior[i], jurus_warrior[i]);//meminta inputan nama, elemen dan jurus karakter
    }

    hitung_powerboss(jurus_bos, &power_bos);             //memanggil prosedur untuk perhitungan kekuatan bos
    hitung_power_warr(n, nama_warrior, jurus_warrior, elemen_bos, elemen_warrior, power_warrior);//memanggil prosedur untuk perhitungan kekuatan karakter
    elemen(n, elemen_warrior, elemen_bos, power_warrior);//memanggil proseedur untuk perhitungan elemen karakter dengan bos
    hasil(n, nama_warrior, power_warrior, &power_bos);   //memanggil prosedur untuk menampilkan hasil perhitungan

    return 0;    //menandakan program Kakan berjalan normal
}