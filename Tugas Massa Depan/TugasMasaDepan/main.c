/*Saya Muhammad Rizki mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahannya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. aamiin.*/
#include "header.h"     //memanggil library header.h yang telah dibuat

int main(){             //fungsi utama program
    char kata[100];     //deklarasi array of char untuk menampung kata inputan
    int n;              //deklarasi variabel untuk inputan ketebalan
    scanf("%s", &kata); //meminta inputan kata
    scanf("%d", &n);    //meminta inputan angka
    tampil(kata, n);    //memanggil prosedur untuk menampilkan pola

    return 0;           //Menyatakan hasil keluaran dari fungsi main() adalah 0.
}
/*PENJELASAN SINGKAT TENTANG PROGRAM
    Inputan akan digunakan sebagai parameter dari prosedur tampil
    tentukan pada setiap char apakah kode ascii-nya bernilai puluhan atau ratusan==>untuk perhitungan looping nantinya
    angka yang akan ditampilkan ditentukan dari hasil kembalian fungsi bacaangka
    angka yang dihasilkan akan dijadikan acuan untuk proses pemilihan pola apa yang harus ditampilkan
    menampilkan pola 5 kali looping sesuai dengan pembagian jenis-jenis pola pada angka(dari atas ke bawah)
    memanggil prosedur pola yang sesuai
*/
