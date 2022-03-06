/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal UAS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"         //memanggil library header.h

int main(){                 //fungsi utama program
    int n;                  //variabel integer penampung banyak kelompok angka
    scanf("%d", &n);        //meminta inputan n
    data arr[n];            //deklarasi array of tipe data terstruktur sepanjang n
    for(i=0; i<n; i++){     //for loop sebanyak n
        for(j=0; j<4; j++){ //for loop sebanyak 4 kali
            scanf("%d", &arr[i].angka[j]);//meminta inputan angka
        }
    }
    urutan(n, arr);         //memanggil prosedur sorting
    tampil(n, arr);         //memanggil prosedur tampil
    return 0;               //menandakan program berjalan normal
}
