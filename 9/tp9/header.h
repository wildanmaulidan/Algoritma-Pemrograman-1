/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP9 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>   //memanggil library stdio
#include<string.h>  //memanggil library string.h

int i, j;           //variabel global untuk loop dan penomoran index

void hitung_powerboss(char jurus_bos[50], int *power_bos);//prosedur untuk perhitungan kekuatan bos
void hitung_power_warr(int n, char nama_warrior[n][50], char jurus_warrior[n][50], char elemen_bos[50], char elemen_warrior[n][50], int power_warrior[n]);//prosedur untuk perhitungan kekuatan karakter
void elemen(int n, char elemen_warrior[n][50], char elemen_bos[50], int power_warrior[n]);//prosedur untuk perhitungan elemen karakter dengan bos
void hasil(int n, char nama_warrior[n][50], int power_warrior[n], int *power_bos);//prosedur untuk menampilkan hasil
