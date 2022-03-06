/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 3 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>   //memanggil library stdio.h
#include<string.h>  //memanggil library string.h

int i, j;           //deklarasi variabel global==>kebanyakan digunakan pada loop dan penomoran index

typedef struct      //tipe data bentukan
{
    int a;          //variabel penampung sisi segitiga
    int b;          //variabel penampung sisi segitiga
    int c;          //variabel penampung sisi segitiga
    int luas;       //variabel penampung luas segitiga
}segitiga;          //nama tioe data bentukan

void hipoluas(int n, segitiga siku_siku[]);   //prosedur untuk perhitungan hipotenusa dan luas setiap segitga
void max(int n, segitiga siku_siku[]);        //prosedur untuk menentukan luas dan hipotenusa segitiga terbesar, 
                                              //sekaligus menampilkannya sesuai format output yang diminta

/*
Pada kode program ini saya hanya mengunakan prosedur,
1)  karena pada proses yang pertama(hitung luas dan hipotenusa)
    itu tidak membutuhkan return.
2)  karena pada proses yang kedua(penentuan segitiga terluas)
    karena membutuhkah return berupa 2 value, maka oleh karena itu 
    saya menggantinya dengan prosedur.

***Mohon maaf dan mohon bimbingannya jika alasan pemgimplementasian saya kurang tepat ibuk :)***
*/