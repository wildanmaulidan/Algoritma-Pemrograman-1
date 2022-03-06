/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal UAS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                         //memanggil library header.h

int hitung(int n, char str[n][100], char word[50]){//fungsi menghitung kata
    int count=0;                            //variabel penampung banyak kata yang didapat
    for(i=0; i<n; i++){                     //for loop sebanyak n
        j=0;                                //isi awal j adalah 0
        k=0;                                //isi awal k adalah 0
        do{                                 //do while loop 
            if(str[i][j]==word[k]){         //jika char str sama denagn char word
                k++;                        //maka k increment
            }
            else if(str[i][j]==word[0]){    //jika char str sama dengan char index 0 word
                k=1;                        //maka k=1
            }
            else{                           //jika tidak
                k=0;                        //maka k=0
            }
            if(word[k]=='\0'){              //jika k sudah sampai pada akhir index word
                count++;                    //maka terhitung 1 kata ditemukan, count increment
            }
            j++;                            //increment j
        }while(str[i][j]!='\0');            //syarat loop
    }
    return count;                           //nilai kembalian fungsi yaitu variabel count
}

