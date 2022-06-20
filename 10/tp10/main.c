/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP10 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                                 //memanggil library header.h

int main(){                                         //fungsi utama program
    data agen[3];                                   //deklarasi array of tipe data bentukan     
    for(i=0; i<3; i++){                             //for loop sebanyak 3 kali
        scanf(" %c", &agen[i].nama[0]);             //meminta inputan inisial nama
        if(agen[i].nama[0]=='B'){                   //jika inisial 'B'
            strcpy(agen[i].nama, "BobaBobi");       //maka nama lengkap BobaBobi
            agen[i].n=4;                            //banyak kode
            for(j=0; j<agen[i].n; j++){             //for loop sebanyak n kode
                scanf("%d", &agen[i].kode[j]);      //meminta angka kode
                agen[i].kode[4+j]=agen[i].kode[j];  //karna Boba dan Bobi adalah orang yang berbeda namun berbagi kode yang sama, maka kode digandakan
            }
        }
        else if(agen[i].nama[0]=='N'){              //jika inisial 'N'
            strcpy(agen[i].nama, "Natasha");        //maka nama "Natasha"
            agen[i].n=7;                            //banyak kode
            for(j=0; j<agen[i].n; j++){             //for loop sebanyak n kode
                scanf("%d", &agen[i].kode[j]);      //meminta input angka kode
            }
        }
        else if(agen[i].nama[0]=='W'){              //jika inisial 'W'
            strcpy(agen[i].nama, "Wanda");          //maka nama "Wanda"
            agen[i].n=5;                            //banyak kode
            for(j=0; j<agen[i].n; j++){             //for loop sebanyak n kode
                scanf("%d", &agen[i].kode[j]);      //meminta angka kode
            }
        }
        agen[i].sumkode=jumlahkode(agen);           //jumlah kode sama dengan return dari fungsi sumkode
    }

    sort(agen);                                     //memanggil prosedur sort untuk pengurutan
    tampilenkripsi(agen);                           //memanggil prosedur untuk enkripsi

    return 0;                                       //Menyatakan hasil keluaran dari fungsi main() adalah 0
}
