/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP10 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>              //memanggil library stdio.h    
#include<string.h>             //memangggiil library string.h

int i, j, k;                   //deklarasi variabel global==>unutk perulangan dan penomoran index

typedef struct                 //tipe data bentukan
{                           
    char nama[10];             //varibael penampung nama
    int kode[20];              //variabel penampung kode
    int sumkode;               //variabel penampung jumlah kode
    int n;                     //variabel penampung banyak kode
}data;                         //nama tipe data bentukan

int jumlahkode(data agen[]);   //fungsi unutk menghitung jumlah kode
void sort(data agen[]);        //prosedur untuk mengurutkan
void tampilenkripsi(data agen[]);//prosedur untuk enkripsi