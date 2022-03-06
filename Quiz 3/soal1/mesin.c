/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 3 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"         //memanggil library header.h

void hipoluas(int n, segitiga siku_siku[]){ //prosedur perhitungan hipotenusa dan luas segitiga
    for(i = 0; i<n; i++){                   //for loop sebanyak n
        siku_siku[i].luas= 0;               //assignment array luas segitiga dengan 0
        if(siku_siku[i].a>siku_siku[i].b && siku_siku[i].a>siku_siku[i].c){//jika sisi a merupakan sisi paling besar, maka
            siku_siku[i].luas=siku_siku[i].b*siku_siku[i].c/2;             //luas segitiga = sisi b * sisi c / 2
        }                                                                  //SISI A DIJADIKAN SEBAGAI PENAMPUNG HIPOTENUSA SEGITIGA
        else if(siku_siku[i].b>siku_siku[i].a && siku_siku[i].b>siku_siku[i].c){//jika sisi b merupakan sisi paling besar, maka
            siku_siku[i].luas=siku_siku[i].a*siku_siku[i].c/2;                  //luas segitiga = sisi a * sisi c / 2
            siku_siku[i].a=siku_siku[i].b;                                      //sisi b dipindahkah ke dalam variabel sisi a
        }
        else if(siku_siku[i].c>siku_siku[i].a && siku_siku[i].c>siku_siku[i].b){//jika sisi c merupakan sisi paling besar, maka
            siku_siku[i].luas=siku_siku[i].a*siku_siku[i].b/2;                  //luas segitiga = sisi a * sisi b / 2
            siku_siku[i].a=siku_siku[i].c;                                      //sisi c dipindahkah ke dalam variabel sisi a
        }
    }
}

void max(int n, segitiga siku_siku[]){  //prosedur penentuan luas dan hipotenusa segitiga terbesar
    int luasmax=siku_siku[0].luas;      //variabel penampung luas terbesar
    int hipomax=siku_siku[0].a;         //variabel penampung hipotenusa segitiga terluas
    for(i=0; i<n; i++){                 //for loop sebanyak n
        if(siku_siku[i].luas>luasmax){  //jika luas segitiga lebih besar dari max, maka
            luasmax=siku_siku[i].luas;  //luas segitiga tersebut menjadi nilai max
            hipomax=siku_siku[i].a;     //hipotenusa segitiga tersebut menjadi nilai max
        }
    }
    printf("%d %d\n", luasmax, hipomax);//tampilkan hasil
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