/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Evaluasi 2
Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>          //memanggil library stdio.h
#include<string.h>         //memanggil library string.h

int i, j, k, plus;         //variabel global untuk looping, index dan penanda banyak anagram

typedef struct             //tipe data bentukan
{
    char kalimat[200];     //variabel kalimat inputan
    char word1[100];       //kalimat sebelum tanda '?'
    char word2[100];       //kalimat sesudah tanda '?'
}data;                     //nama tipe data bentukan

void delete_(int n, data bahan[n]);         //prosedur hapus char '_'
void lowercase(int n, data bahan[n]);       //prosedur pengubah huruf kapital menjadi huruf kecil
void bagi(int n, data bahan[n]);            //prosedur membagi kalimat menjadi 2 bagian
void sorting(int n, data bahan[n]);         //prosedur mengurutkan karakter
void anagram(int n, data bahan[n]);         //prosedur menemtukan anagram
int detik(char bahan[10]);                  //fungsi waktu dalam detik
void polindrom_cek(int penambah, int waktu);//prosedur menentukan polindrom
