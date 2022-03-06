/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 2 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>                       //memanggil library stdio.h untuk menggunakan fungsi-funfsi yang diperlukan
#include<string.h>                      //memanggil library string.h untuk menggunakan fungsi-funsi string

int main(){                             //fungsi utama dari sebuah kode bahasa C
//======MEMBUAT VARIABEL YANG DIPERLUKAN========
    char str[900];                      //deklarasi array of char dengan alokasi panjang 900(MAKSIMAK SESUAI KETENTUAN)==> untuk menampung string inputan 
    char gage[10];                      //deklarasi array of char dengan alokasi panjang 10==> untuk menampung string ganjil atau genap
    char strfinal[500];                 //deklarasi array of char dengan alokasi panjang 500==> untuk menampung sring hasil pembentukan ganjil genap
    int n, i, j;                        //deklarasi variabel |n==>untuk menampung jumlah panjang masukan user yang ingin dicari||i dan j==>untuk keperluan loop dan pemanggilan index
    int dapat=0;                        //deklarasi sekaligus assignment variabel dapat==>untuk menampung berapa jumlah kata ang didapat dalam pencarian kata, isi awal 0 
//======MEMBUAT VARIABEL YANG DIPERLUKAN========

//==============MEMINTA INPUTA==================
    scanf("%s", str);                   //meminta inputan string            
    scanf("%s", gage);                  //meminta inputan ganjil genap
    scanf("%d", &n);                    //meminta banyaknya char pada kata yang dicari
    char cari[n];                       //deklarasi array of char cari dengan alokasi sebanya n
    if(n<=10&&n>0){                     //jika panjang karakter suku kata memenuhi ketentuan soal, maka
    scanf("%s", cari);                  //meminta striing yang ingin dicari
    }
    else{                               //jika panjang karakter suku kata TIDAK MEMENUHI KETENTUAN, maka
        printf("INPUTAN TIDAK VALID\n");//print inputan tidak valid
    }
//==============MEMINTA INPUTA==================

//===PROSES BENTUKAN STRING POSISI GANJIL GENAP===
    j=0;                                //j bernilai 0==>untuk nomor index string final saat pengisian value nya 
    if(strcmp(gage,"genap")==0){        //jika isi striing gg adalah genap, maka...
        for(i=1; i<=strlen(str); i+=2){ //menggunakan for loop, alasannya karena=============>JUMLAH LOOP/PERULANGANNYA MASIH DAPAT DIKETAHUI
            strfinal[j]=str[i];         //pengisian nilai string final
            j++;                        //increment j                       
        }                               //loop akan terus berjalan selama i masih kecil dari panjang string str
    }
    else if(strcmp(gage,"ganjil")==0){  //jika isi striing gg adalah ganjil, maka...
        for(i=0; i<=strlen(str); i+=2){ //menggunakan for loop, alasannya karena=============>JUMLAH LOOP/PERULANGANNYA MASIH DAPAT DIKETAHUI
            strfinal[j]=str[i];         //pengisian nilai string final
            j++;                        //increment j                     
        }                               //loop akan terus berjalan selama i masih kecil dari panjang string str
    }
    else{                               //jika kondisi diatas tidak ada yang terpenuhi, maka
        "Tidak Valid\n";                //tampilkan ini
    }
//---------------------------------------------------
    printf("%s\n", strfinal);           //PRINT result
//===PROSES BENTUKAN STRING POSISI GANJIL GENAP===

//===========PROSES MENCARI KATA====================                              
    j=0;                                //j bernilai 0==>untuk nomor index string final saat pencarian kata
    for(i=0; i<strlen(strfinal); i++){  //menggunakan for loop, alasannya karena=============>JUMLAH LOOP/PERULANGANNYA MASIH DAPAT DIKETAHUI                                        
        if(strfinal[i]==cari[j]){       //jika char string index ke-i final dan char cari index ke-j sama, maka
            j++;                        //increment j
        }                                                  
        else if(strfinal[i]==cari[0]){  //jika char string index ke-i final dan char cari index ke-0 sama, maka
            j=1;                        //j bernilai 1                
        }
        else{                           //jika kondisi diatas tidak ada yang terpenuhi, maka 
            j=0;                        //j akan tetap/dikembalikan ke nilai awal, yaitu 0                
        }
        if(cari[j]=='\0'){              //jika string cari sudah mencapai ujung(null), maka...
            dapat++;                    //msatu kata ditemukan,dan variabel dapat ditambah 1                
        }                                           
    }
    //---------------------------------------------
    printf("%d\n", dapat);              //PRINT result   
//===========PROSES MENCARI KATA====================

    return 0;                           //digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0
}