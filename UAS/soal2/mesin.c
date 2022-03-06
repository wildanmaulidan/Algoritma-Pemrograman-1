/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal UAS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                     //memanggil library  header.h

void urutan(int n, data arr[n]){        //prosedur sorting
    int temp;                           //variabel penampung sementara
    int loop;                           //variabel loop
    for(loop=0; loop<n; loop++){        //for loop sebanyak n
        for(i=0; i<4; i++){             //for loop sebbanyak angka
            for(j=0; j<4-i-1; j++){     //for loop untuk memeriksa
                if(arr[loop].angka[j]>arr[loop].angka[j+1]){//jika isi idex di depan lebih kecil
                    temp=arr[loop].angka[j];                //maka dilakukan penukaran
                    arr[loop].angka[j]=arr[loop].angka[j+1];//isi idex
                    arr[loop].angka[j+1]=temp;              //hungga didapat urutan yang sasuai
                }
            }
        }
    }
}


void tampil(int n, data arr[n]){        //prosedur tampilkan hasil
    int spasi=0;                        //variabel banyaknya spasi
	for(i=0; i<n; i++){                 //for loop sebanyak n
        if(arr[i-1].angka[3]>=10000 && i-1>=0){//jika angka terbesar index sebelumnya kelipatan 10 ribu
            spasi+=4;                   //maka spasi bertambah 4
        }
        else if(arr[i-1].angka[3]>=1000 && i-1>=0){//jika angka terbesar index sebelumnya kelipatan seribu
            spasi+=3;                   //maka spasi tambah 3
        }
        else if(arr[i-1].angka[3]>=100 && i-1>=0){//jika angka terbesar index sebelumnya kelipatan seratus
            spasi+=2;                   //maka spasi tambah 2
        }
        else if(arr[i-1].angka[3]>=10 && i-1>=0){//jika angka terbesar index sebelumnya kelipatan sepuluh
            spasi+=1;                   //maka spasi tambah 1
        }
        for(j=0; j<4; j++){             //for loop sebanyak 4 kali
            for(k=spasi; k>0; k--){     //tampilkan spasi
                printf(" ");            
            }
            printf("%d\n", arr[i].angka[j]);//tampilkan angka
        }
        spasi++;                        //increment pada spasi 
	}
}


