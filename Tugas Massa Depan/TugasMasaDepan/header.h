/*Saya Muhammad Rizki mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahannya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. aamiin.*/
#include<stdio.h>                   //memanggil library stdio.h untuk menggunakan berapa fungsi seperti operasi input-output
#include<string.h>                  //memenggil library string.h untuk operasi pada string

int i, j, k;                        //deklarasi variabel global, banyak dipakai untuk looping dan penomoran index

void tampil(char huruf[100], int n);//prosedur untuk menentukan pola yang akan ditampilkan
int bacaangka(int *terbagi, int *pembagi);
void pola_010(int angka);           //prosedur tampilkan pola
void pola_101(int angka);           //prosedur tampilkan pola
void pola_001(int angka);           //prosedur tampilkan pola
void pola_100(int angka);           //prosedur tampilkan pola
void pola_110(int angka);           //prosedur tampilkan pola
void pola_1(int angka);             //prosedur tampilkan pola
void pola_10(int angka);            //prosedur tampilkan pola
void pola_01(int angka);            //prosedur tampilkan pola
void pola_11(int angka);            //prosedur tampilkan pola
void spasi(int angka);              //prosedur tampilkan spasi
/*PENJELASAN SINGKAT TENTANG PROGRAM
    Inputan akan digunakan sebagai parameter dari prosedur tampil
    tentukan pada setiap char apakah kode ascii-nya bernilai puluhan atau ratusan==>untuk perhitungan looping nantinya
    angka yang akan ditampilkan ditentukan dari hasil kembalian fungsi bacaangka
    angka yang dihasilkan akan dijadikan acuan untuk proses pemilihan pola apa yang harus ditampilkan
    menampilkan pola 5 kali looping sesuai dengan pembagian jenis-jenis pola pada angka(dari atas ke bawah)
    memanggil prosedur pola yang sesuai
*/