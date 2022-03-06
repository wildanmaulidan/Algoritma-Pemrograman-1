/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 3 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                     //memanggil library header.h

int main(){                             //fungsi utama program
    int n;                              //variabel untuk jumlah kata
    scanf("%d", &n);                    //meminta inputan n
    char data[n][50];                   //deklarasi array of string sebanyak n kata dengan maksimum 50 karakter                 
    for(i=0; i<n; i++){                 //for loop sebanyak n
        scanf("%s", data[i]);           //meminta inputan string
    }

    tampil(n, data, maxstring(n, data));//memanggil prosedur dengan fungsi di dalamnya

    return 0;                           //digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0.
}