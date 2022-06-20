/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Evaluasi 2
Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"     //memanggil library header.h

int main(){             //fungsi utama program
    int n;              //variabel jumlah banyak dialog
    scanf("%d", &n);    //meminta inputan berupa integer
    data input[n];      //array of tipe data bentukan sepanjang n
    for(i=0; i<n; i++){ //for loop sebanyak n
        scanf("%s", input[i].kalimat);//meminta inputan kalimat dialog
    }
    char durasi[10];    //variabel durasi dalam bentuk kalimat
    scanf("%s", durasi);//meminta inputan kalimat waktu

    delete_(n, input);  //prosedur hapus char '_'
    lowercase(n, input);//prosedur pengubah huruf kapital menjadi huruf kecil
    bagi(n, input);     //prosedur membagi kalimat menjadi 2 bagian
    sorting(n, input);  //prosedur mengurutkan karakter
    anagram(n, input);  //prosedur menemtukan anagram
    polindrom_cek(plus, detik(durasi));//prosedur polindron dengan menggunakan fungsi detik sebagai parameter

    return 0;           //penanda program berjalan normal
}