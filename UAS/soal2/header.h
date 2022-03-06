/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal UAS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>               //memanggil library stdio.h
#include<string.h>              //memanggil library string.h

int i, j, k;                    //variabel global untuk looping dan penomoran index

typedef struct                  //tipe data terstruktur 
{
    int angka[4];               //array of integer penampung angka
}data;                          //nama tipe data tersturktur

void urutan(int n, data arr[n]);//deklarasi prosedur sorting
void tampil(int n, data arr[n]);//deklarasi prosedur menampilkan hasil