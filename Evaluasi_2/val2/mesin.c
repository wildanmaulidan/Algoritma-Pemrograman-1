/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Evaluasi 2
Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                     //memanggil library header.h

void delete_(int n, data bahan[n]){     //prosedur hapus karakter _
    int len;                            //variabel panjang kalimat
    for(i=0; i<n; i++){                 //for loop sebanyak n
        j=0;                            //assignment j  
        len=strlen(bahan[i].kalimat);   //assignment len
        while(bahan[i].kalimat[j]!='\0'){//while loop 
            if(bahan[i].kalimat[j] == '_')//jika karakter ditemukan
            {
                for(k = j; k < len; k++)//for loop  
                {
                    bahan[i].kalimat[k] = bahan[i].kalimat[k+1];//maka hapus karakter tersebut
                }
                len--;                  //decrement len
                j--;	                //decrement j
            }
            j++;                        //increment j
        }
	}	
}

void lowercase(int n, data bahan[n]){   //prosedur huruf kecil
    for(i=0; i<n; i++){                 //for loop sebanyak n
        j=0;                            //assignment j
        while(bahan[i].kalimat[j]!='\0'){//while loop
            if(bahan[i].kalimat[j] >= 'A' && bahan[i].kalimat[j] <= 'Z') {//jika karakter adalah kapital
                bahan[i].kalimat[j] = bahan[i].kalimat[j] + 32;//maka ubah menjadi huruf kecil
            }
            j++;                        //increment j
        }
    }
}

void bagi(int n, data bahan[n]){        //prosedur bagi kalimat
    for(i=0; i<n; i++){                 //for loop sebanyak n
        j=0;                            //assignment j
        while(bahan[i].kalimat[j]!='?'){//while loop 
            bahan[i].word1[j]=bahan[i].kalimat[j];//mengisi kalimat pertama
            j++;                        //increment j
        }
        bahan[i].word1[j]='\0';         //penutup string

        j++;                            //increment j
        k=0;                            //assignment k, untuk nomor index
        while(bahan[i].kalimat[j]!='\0'){//while loop
            bahan[i].word2[k]=bahan[i].kalimat[j];//mengisi kalimat kedua
            j++;                        //increment j
            k++;                        //increment k
        }
        bahan[i].word2[k]='\0';         //penutup string
    }
}

void sorting(int n, data bahan[n]){     //prosedur mengurutkan
    char temp;                          //variabel penampung sementara
    for(i=0; i<n; i++){                 //for loop sebanyak n
        for(j=0; j<strlen(bahan[i].word1)-1; j++){//for loop
            for(k=j+1; k<strlen(bahan[i].word1); k++){//for loop
                if(bahan[i].word1[j]>bahan[i].word1[k]){//menukarkan isi antar index
                    temp=bahan[i].word1[j];             //hingga urutannya sesuai
                    bahan[i].word1[j]=bahan[i].word1[k];//menurut urutan alfabet
                    bahan[i].word1[k]=temp;             //sort kalimat 1
                }
                if(bahan[i].word2[j]>bahan[i].word2[k]){//sort kaliamat 2
                    temp=bahan[i].word2[j];
                    bahan[i].word2[j]=bahan[i].word2[k];
                    bahan[i].word2[k]=temp;
                }
            }
        }
        // printf("%s\n%s\n\n", bahan[i].word1, bahan[i].word2);
    }
}

void anagram(int n, data bahan[n]){     //prosedur menentukan anagram
    for(i=0; i<n; i++){                 //fpr loop sebanyak n
        if(strcmp(bahan[i].word1, bahan[i].word2)==0){//jika kalimat 1 dengan kalimat 2 sama
            printf("Anagram!\n");       //maka tampilkan kalimat di samping
            plus++;                     //increment var penambah angka polindrom
        }
        else{                           //jika tidak
            printf("Bukan Anagram!\n");//maka tampiilkan kalimat di samping
        }
    }
}

int detik(char bahan[10]){              //fungsi durasi dalam detik
    int produk;                         //integer produk
    int kali=1;                         //variabel pengali
    int jam=0, menit=0, detik=0;        //variabel satuan waktu
    i=strlen(bahan)-1;                  //assignment i
    while(bahan[i]!=':'){               //while loop
        detik+=(bahan[i]-48)*kali;      //konversi char ke int
        kali*=10;                       //pengaturan satuan
        i--;                            //decrement i
    }
    i--;                                //decrement i
    kali=1;                             //assignment kali
    while(bahan[i]!=':'){               //while loop
        menit+=(bahan[i]-48)*kali;      //konversi char ke int
        kali*=10;                       //pengaturan satuan
        i--;                            //decrement i
    }
    i--;                                //decrement i
    kali=1;                             //assignment kali
    while(i==0){                        //while loop
        jam+=(bahan[i]-48)*kali;        //konversi char ke int
        kali*=10;                       //pengaturan satuan
        i--;                            //decrement i
    }
    // printf("jam=%d  menit=%d  detik=%d\n", jam, menit, detik);
    produk=jam*3600;                    //konversi jam ke detik
    produk+=menit*60;                   //konversi menit ke detik
    produk+=detik;                      //hasil akhir dalam satuan detik

    return produk;                      //nilai kembalian fungsi
}

void polindrom_cek(int penambah, int waktu){//prosedur polindrom
    int bilangan=penambah+waktu;        //var bilangan polindrom
    int balik=0, tanda, banding=bilangan;//variabel proses
    while(bilangan!=0){                 //while loop
        tanda=bilangan%10;              //assignment variabel penanda
        balik=balik*10+tanda;           //penentuan polindrom
        bilangan/=10;                   //bilanhan poli dibagi 10 setiap loop
    }
    if(banding==balik){                 //jika var pembanding dengan var balik sama
        printf("\nLanjut Nonton\n");    //maka tampilkan kalimat di samping
    }
    else{                               //jika tidak
        printf("\nTidur\n");            //maka tampilkan kalimat di samping
    }
}