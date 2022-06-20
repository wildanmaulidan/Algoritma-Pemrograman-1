/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP8 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>                                               //memanggil library stdio.h
#include<string.h>                                              //memanggil library string.h

int main(){                                                     //fungsi utama program
//================minta input======================
    int i, j, k, n, kon=0;                                      //deklarasi variabel[i, j dan k] untuk bebrapa keperluan seperti loop dan penandaan index array. var n unntuk banyaknya string innput. serta var kon untuk jumlah ascii kata kunci
    char katakunci[51];                                         //deklarasi variabel menampung string kata kunci
    scanf("%s", katakunci);                                     //meminta input string kata kunci
    scanf("%d", &n);                                            //meminta banyak inputan string
    char folder[n][50];                                         //deklarasi array of string sebanyak n kalimat dan 50 karakter
    for(i=0; i<n; i++){                                         //for loop sebanyak n
        scanf("%s", folder[i]);                                 //meminta inputan array of string
    }
    int panjang=strlen(folder[1]);                              //variabel untuk menyimpan panjang string inputan sebelum diproses
//================minta input======================

//================jumlah ascii====================
    int len_katakunci=strlen(katakunci);                        //variabel panjangnya kata kunci
    for (i = 0; i < len_katakunci; i++){                        //for loop sebanyak panjang kata kunci
        kon = kon + katakunci[i];                               //jumlah kode ascii dimasukan ke variabel kon
    }
    kon%=26;                                                    //kon dimodulus 26 sesuai jumlah alfabet
//================jumlah ascii====================

//===============hilangkan char *=================
    int len[n];                                                 //array of integer sebanyak n untuk menampung panjang string pada array 
    for(i=0; i<n; i++){                                         //for loop sebanyak n
        len[i] = strlen(folder[i]);                             //mengisi nilai panjang string
        for(j = 0; j < len[i]; j++)                             //for loop sebanyak panjang string
        {
            if(folder[i][j] == '*')                             //jika index tersebut berisi '*', maka
            {
                for(k = j; k < len[i]; k++)                     //lakukan for loop sampai ujung string
                {
                    folder[i][k] = folder[i][k+ 1];             //isi value index tersebut dengan index di depannya
                }
                len[i]--;                                       //var panjang string dikurang tiap masuk if ini
                j--;	                                        //var j juga ikut dikurangi
            } 
        }	
    }
//===============hilangkan char *=================

//===============copy string=======================
    char copy[n][50];                                          //buat array of string untuk menyimpan string awal
    for(i=0; i<n; i++){                                        //for loop sebanyak n
        strcpy(copy[i], folder[i]);                            //salin string awal ke string copy
    }
//===============copy string=======================

//==============proses deskripsi==================
    for(i=0; i<n; i++){                                        //for loop sebanyak n
        for(j=0; j<strlen(folder[i]);j++){                     //for loop sebanyak panjang string
            if((folder[i][j]>='a' && folder[i][j]<='z')){      //jika isi index string tersebut adalah alfabet kecil, maka
                folder[i][j]=folder[i][j]-kon;                 //huruf mundur sebanyak nilai kon
                if(folder[i][j]<'a'){                          //jika isi index lebih kecil dari a, maka
                    folder[i][j]=folder[i][j]+'z'-'a'+1;       //isi index dimasukan lagi ke rentang huruf kecil menurut kode ascii
                }
            }
            else if((folder[i][j]>='A' && folder[i][j]<='Z')){ //jika isi index string tersebut adalah alfabet kapiital, maka
                folder[i][j]=folder[i][j]-kon;                 //huruf mundur sebanyak nilai kon
                if(folder[i][j]<'A'){                          //jika isi index lebih kecil dari A, maka 
                    folder[i][j]=folder[i][j]+'Z'-'A'+1;       //isi index dimasukan lagi ke rentang huruf kapital menurut kode ascii
                }
            }
        }
    }
//==============proses deskripsi==================

//=============hitung ganjil genap================
    int sum[n];                                                //array of integer untuk jumlah ASCII tiap string          
    for(i=0; i<n; i++){                                        //for sebanyak n
        sum[i]=0;                                              //isi awal bernilai 0
        for(j=0; j<strlen(folder[i]); j++){                    //for loop sebanyak panjang string
            sum[i]+=folder[i][j];                              //jumlahkan kode ascii nya
        }
    }
//=============hitung ganjil genap================


//=============Tampilkan hasil==============

    printf(">> Deteksi Virus <<\n");                            //tampilkan ini
    for(i=0; i<n; i++){                                         //for loop sebanyak n
        len[i] = strlen(folder[i]);                             //isi variabel panjang string
        if(sum[i]%2!=0){                                        //jika jumlah ASCII ganjil
            printf("%s\n", folder[i]);                          //maka lansung tampilkan string seperti biasa
        }
        else{                                                   //jika tidak
            for(j=0; j<panjang-len[i]; j++){                    //maka lakukan for loop sebanyak karakter '*' yang hilang
                printf(" ");                                    //tampilkan spasi
            }
            printf("%s\n", folder[i]);                          //tampilkan string
        }
    }
    printf("\n");                                               //enter

    printf(">> Path Directory Asli <<\n");                      //tampiilkan kalimat ni
    for(i=0; i<n; i++){                                         //for loop sebanyak n
        if(i==n-1){                                             //jika sudah sampai pada string yang terakhir
            printf("%s\n",folder[i]);                           //maka tampilkan dengan enter
        }
        else{                                                   //jika tidak
            printf("%s%c",folder[i], 92);                       //maka tampilkan dengan slash
        }
    }
    printf("\n");                                               //enter

    printf(">> Kamus <<\n");                                    //tampilkan kata ni
    for(i=0; i<n; i++){                                         //for loop sebanyak n
        printf("%d. [%s] -> [%s]\n", i+1, copy[i], folder[i]);  //tampilkan string sesudah deskripsi dan sebelum deskripsi
    }

    return 0;                                                   //digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0
}