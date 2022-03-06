/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi Kuis 2 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>                                   //memanggil library stdio.h untuk menggunakan fungsi-funfsi yang diperlukan
#include<string.h>                                  //memanggil library string.h untuk menggunakan fungsi-funsi string

int main(){                                         //fungsi utama dari sebuah kode bahasa C
//==================PROSES DEKLARASI, ASSIGNMENT, MEMINTA INPUT, DAN PENENTUAN STRING TERPANJANG==================
    int n;                                          //deklarasi variabel n==>untuk menampung banyaknya string di dalam array of string
    int i, j;                                       //deklarasi variabel i dan j==>untuk penomoran index array ketika memanggil ataupun mengisi array tersebut
    int maxchar=0;                                  //deklarasi variabel max==>untuk menampung nilai jumlah array paling panjang
    scanf("%d", &n);                                //meminta inputan variabel n==>untuk alokasi nilai array of string nanti
    char str[n][200];                               //deklarasai array of string--->sebanyak n kata dan taip katanya maksimal 200 karakter                       
    for(i=0; i<n; i++){                             //menggunakan for loop sebanyak n==>alasanya karena ***JUMLAH PERULANGANNYA MASIH BISA DIKETAHUI*** 
        scanf("%s", &str[i]);                       //meminta inputan array string per kata
        if(strlen(str[i])>maxchar){                 //jika panjang array string ke-i lebih besar dari maxchar, maka..
            maxchar=strlen(str[i]);                 //maxchar bernilai panjang string ke-i tersebut 
        }
    }
//==================PROSES DEKLARASI, ASSIGNMENT, MEMINTA INPUT, DAN PENENTUAN STRING TERPANJANG==================

//==================PROSES STRING REVERSE==================
    for(i=0; i<n; i++){                             //menggunakan for loop sebanyak n==>alasanya karena ***JUMLAH PERULANGANNYA MASIH BISA DIKETAHUI*** 
        if(strlen(str[i])<strlen(str[i-1])){        //jika String yang lebih pendek dari string sebelumnya maka ditambahkan enter di atasnya.
            printf("\n");                           //print enter
        }
        for(j=0; j<maxchar-strlen(str[i]); j++){    //menggunakan for loop sebanyak n==>alasanya karena ***JUMLAH PERULANGANNYA MASIH BISA DIKETAHUI*** 
            printf(" ");                            //print spasi
        }
        for(j=strlen(str[i])-1; j>=0; j--){         //menggunakan for loop sebanyak n==>alasanya karena ***JUMLAH PERULANGANNYA MASIH BISA DIKETAHUI*** 
            printf("%c", str[i][j]);                //print char ke-j dari string ke-i
        }
        printf("\n");                               //print enter
    }
//==================PROSES STRING REVERSE==================

    return 0;                                       //digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0
}