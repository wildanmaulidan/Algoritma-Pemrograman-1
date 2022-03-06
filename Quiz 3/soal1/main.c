/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 3 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"         //memanggil library header.h

int main(){                 //fungsi utama program
    int n;                  //deklarasi integer n ==> untuk jumlah segitiga inputan
    scanf("%d", &n);        //meminta inputan variabel n
    segitiga siku_siku[n];  //deklarasi array of tipe data bentukan sepanjang n
    for(i=0; i<n; i++){     //for loop sebanyak n
        scanf("%d%d%d", &siku_siku[i].a, &siku_siku[i].b, &siku_siku[i].c);//meminta inputan panjang setiap sisi segitiga
    }
    hipoluas(n, siku_siku); //memanggil prosedur perhitungan hipotenusa dan luas
    max(n, siku_siku);      //memangggil prosedur menampilkan luas dan hipotenusa segitiga terluas

    return 0;               //digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0.
}
/*
Pada kode program ini saya hanya mengunakan prosedur,
1)  karena pada proses yang pertama(hitung luas dan hipotenusa)
    itu tidak membutuhkan return.
2)  karena pada proses yang kedua(penentuan segitiga terluas)
    karena membutuhkah return berupa 2 value, maka oleh karena itu 
    saya menggantinya dengan prosedur.

***Mohon maaf dan mohon bimbingannya jika alasan pemgimplementasian saya kurang tepat ibuk :)***
*/