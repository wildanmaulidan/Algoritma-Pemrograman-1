/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 3 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                                     //memanggil library header.h

int maxstring(int n, char data[n][50]){                 //fungsi untuk mencari panjang string max
    int max=0;                                          //variabel maksimum pada awal bernilai 0
    for(i=0; i<n; i++){                                 //for loop sebanyak n
        if(strlen(data[i])>max){                        //jika panjang array data lebih besar dari max
            max=strlen(data[i]);                        //maka max bernilai panjang arraay tersebut
        }
    }
    return max;                                         //nilai kembaliannya adalah max
}

void tampil(int n, char data[n][50], int maxleng){      //prosedur untuk menampilkan array sesuai spesifikasi
    for(i=0; i<n; i++){                                 //for loop sebanyak n
        if(strlen(data[i])%2!=0){                       //jika jumlah huruf pada kalimat adalah ganjil, maka
            for(j=maxleng-strlen(data[i]); j>0; j--){   //for loop sebanyak panjang string max dikurangi panjang string 
                printf(" ");                            //tampilkan spasi
            }
            for(j=strlen(data[i])-1; j>0; j--){         //for loop seebanyak panjang  string
                printf("%c", data[i][j]);               //tampilkan string per karakter
            }
            printf("%c\n", data[i][j]);                 //tampilkan karakter dengan enter
        }
        else if(strlen(data[i])%2==0){                  //jika jumlah huruf pada kalimat adalah genap, maka 
            for(j=maxleng-strlen(data[i]); j>0; j--){   //for loop sebanyak panjang string max dikurangi panjang string 
                printf(" ");                            //tampilkan spasi
            }
            for(j=strlen(data[i])/2; j<strlen(data[i]); j++){//for loop sebanyak setengah panjang string
                printf("%c", data[i][j]);               //tampilkan setengah bagian belakang isi string
            }
            for(j=0; j<strlen(data[i])/2; j++){         //for loop sebanyak setengah isi string
                printf("%c", data[i][j]);               //tampilkan setengan bagian depan isi string
            }
            printf("\n");                               //enter
        }
    }
}


