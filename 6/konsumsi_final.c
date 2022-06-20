/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP6 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>       //memanggil library stdio.h unutk menggunakan fungsi-funsi yang diperlukan

typedef struct          //tipe data bentukan yang berisi varabel untuk menampung data tiap inputan
{
    char kode;          //menampung kode makanan 
    int binerstok[8];   //menampung kode biner stok makanan
    int stok;           //menampung jumlah stok makanan
    char nama[100];     //array karakter untuk menampung huruf-huruf nama makanan
    int jmlhambil;      //menampung jumlah sekali ambil untuk data makanan tersebut
    int hitunghuruf;    //penghitung untuk jumlah huruf nama makanan
}konsumsi;  //Nama tipe data bentukannya

int main(){ //fungsi utama program
    int n, i, j;        //Deklarasi variabel> n untuk panjang array banyak data yang dimasukan |i dan j berguna untuk beberapa hal, seperti untuk pengisian data ke variabel array dan untuk perhitunan for
//========================Awal MINTA INPUT=================================
//          ***Awal Input Data Makanan**
    scanf("%d", &n);                                //meminta inputan banyak data
    konsumsi data[n];                               //deklarasi array data dengan alokasi sebanyak n
    for(i=0; i<n; i++){                             //for loop sebanyak n
        scanf(" %c",  &data[i].kode);               //meminta inputan kode data
        j=0;                                        //isi variabel j dengan nilai 0 untuk memasukan inputan ke array biner stok
        scanf(" %d", &data[i].binerstok[j]);        //meminta inputan yang kemudian diisikan ke array stok(biner)data
        while(j!=7){                                //while loop dengan syarat j tidak boleh sama dengan 7
            j++;                                    //increment variabel j
            scanf(" %d", &data[i].binerstok[j]);    //meminta inputan untuk mengisi tiap index array stok(biner)data
        }
        data[i].hitunghuruf=0;                      //mengisi variabel penghitung huruf data dengan nilai 0
        j=0;                                        //variabel j kembali diisi dengan nilai 0 untuk memasukan inputan ke array nama makanan
        scanf(" %c", &data[i].nama[j]);             //meminta inputan yang kemudian diisikan ke array data nama makanan
        while(data[i].nama[j]!=';'){                //while loop dengan syarat inputan huruf dari nama makanan tidak boleh sama dengan ';'
            j++;                                    //increment variabel j
            scanf(" %c", &data[i].nama[j]);         //meminta inputan yang kemudian diisikan ke array data nama makanan
            data[i].hitunghuruf++;                  //increment penghitung jumlah huruf
        }
        scanf("%d", &data[i].jmlhambil);            //meminta inputan jumlah sekali ambil tiap data makanan
    }
//          ***Akhir Input Data Makanan**
//          ***Awal Input Data yang mau diambil**
    char ambil[100];                                //buat array karakter ambil untuk menampung kode makanan yang ingin diambil
    int loop=1;                                     //variabel loop diisi dengan 1. berguna sebagai syarat pada while loop nanti 
    i=0;                                            //isi variabel i dengan 1 unntuk mengisi  tiap indeks array ambil
    int hitungambil=0;                              //buat variabel untuk menghitung berapa banyak jenis makanan yang mau diambil
    scanf(" %c", &ambil[i]);                        //minta inputan kode yang mau diambil
    while (ambil[i]!='*'){                          //while loop dengan kondisi array ambil tidak boleh berisi ';'
        i++;                                        //increment variabel i
        scanf(" %c", &ambil[i]);                    //minta inputan kode yang mau diambil
        hitungambil++;                              //increment hitung ambil
    }
//          ***Akhir Input Data yang mau diambil**
//========================akhir MINTA INPUT=================================

//========================awal Konversi Biner ke Desimal=================================
    for(i=0; i<n; i++){                             //for loop sebanyak data inputan
        int duadipangkat=1;                         //integer untuk pengali binernya
        data[i].stok=0;                             //data index array stok diisi 0 terlebih dahulu
        for(j=7; j>=0;j--){                         //for loop sebanyak 8 kali(KARNA HANYA MENAMPUNG MAKSIMUM 8 DIGIT KODE BINER). memakai decrement agar konversi bisa dilakukan dari digit paling belakang kode biner
            data[i].binerstok[j]=data[i].binerstok[j]*duadipangkat;     //isi indeks biner stok dikallikan dengan pengalinya duadipangkat
            data[i].stok+=data[i].binerstok[j];     //datta stok ditaambahkan dengan hasil konversi digit binner
            duadipangkat*=2;                        //pengali untuk konversi dikalikan 2
        }
    }
//========================akhir Konversi Biner ke Desimal=================================

//========================awal Tampilkan Data Inputan Makanan=================================
    printf("Stok Makanan Awal\n");                  //tampilkan tulisan "Stok Makanan Awal"
    for(i=0; i<n; i++){                             //for loop sebanyak data inputan 
        printf("- %c ", data[i].kode);              //tampilkan kode
        loop=1;                                     //variabel loop diisi 1
        j=0;                                        //variabel j diisi 0
        while(loop==1){                             //while loop jika 
            printf("%c", data[i].nama[j]);          //tampilkan nama makanan
            j++;                                    //increment j
            if(data[i].hitunghuruf==j){             //jika k=jumlah data sama dengan j, maka loop akan bernilai 0 
                loop=0;                             //dan while loop akan berhenti
            }
        }
        printf(" %d\n", data[i].stok);              //tanpilkan data stok dalam desimal
    }
    printf("\n");                                   //enter
//========================akhir Tampilkan Data Inputan Makanan=================================

//========================awal Salin data stok awal ke array penampung=================================
    int penampung[n];                               //buat array penampung smentara untuk membandingkan stok awal dengan sotk akhir. panjangnya sebanyak n
    for(i=0;i<n;i++){                               //for loop sebanyak n
        penampung[i]=data[i].stok;                  //isikan array penampung dengan nilai array stok awal
    }
//========================akhir Salin data stok awal ke array penampung=================================

//========================awal Perhitungan Update data Makanan=================================
    for(i=0; i<n; i++){                             //for loop sebanyak data inputan
        for(j=0; j<hitungambil; j++){               //for loop sebanyak kode inputan yang ingin diambil
            if(ambil[j]==data[i].kode){             //jika kode yang ingin diambil sama dengan kode data
                data[i].stok-=data[i].jmlhambil;    //maka jumlah stok awal dikurangi dengan jumlah sekali ambil
            }
        }
    }
//========================akhir Perhitungan Update data Makanan=================================

//========================awal Bandingkan data stok awal dengan akhir Makanan=================================
    int update=0;                                   //buat variabel untuk penanda apaka ada update atau tidak, nilai awal 0
    for(i=0;i<n;i++){                               //for loop sebanyak n
        if(penampung[i]!=data[i].stok){             //jika jumlah stok awal dengan jumlah stok akhir tidak sama
            update++;                               //maka update bertambah 1
        }
    }
//========================akhir Bandingkan data stok awal dengan akhir Makanan=================================

//========================awal Tampilkan Update data Makanan=================================

    if(update==0){                                 //jika variabel update bernilai 0,
        printf("---Stok Tetap---\n");              // maka tampilkan ("---Stok Tetap---\n")
    }
    else{                                          //jika update tidak 0, maka...
        printf("Stok Makanan Update\n");           //print yang ada di samping ni
        for(i=0; i<n; i++){                        //for loop sebanyak data lagi
            printf("- %c ", data[i].kode);         //tunjukkan kodenya kek awal
            loop=1;                                //sama kayak yang di atas
            j=0;                                   //ini buat while nanti
            while(loop==1){                        //while loop, syaratnya loop harus sama dengan 1
                printf("%c", data[i].nama[j]);     //tampilkan data nama makanan
                j++;                               //increment j
                if(data[i].hitunghuruf==j){        //jika j sudah sama dengan hitung huruf
                    loop=0;                        //maka loop jadinya 0, dan while loop pun berhenti
                }
            }
            if(data[i].stok>=0){                    //jika data stok updatnya lebih besar sama dengan 0
                printf(" %d\n", data[i].stok);      //maka tampilkan data stoknya
            }
            else{                                   //jika lebih kecil dari 0
                printf(" %d\n", 0);                 //maka hanya tampilkan 0 saja
            }
        }
    }
//========================akhir Tampilkan Update data Makanan=================================
    return 0;                                       //kembaliannya 0, biar program berjalan normal
}

