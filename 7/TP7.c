/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP7 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>                                       //Panggil library stdio.h
#include<string.h>                                      //panggil library string.h

int main(){                                             //fungsi utama program
    char input[100];                                    //variabel input
    char hasil[100];                                    //variabel hasil enkripsi 2
    int panjangdepan=0, i, j=0, k=0, n=0;               //variabel untuk iterasi
    int valid=0;                                        //variabel penentuan valid inputan
//=====================MINTA INPUT====================
    scanf("%s", input);                                 //meminta input
    int panjanginput=strlen(input);                     //variabel panjang array input
//====================TENTUKAN VALID ATAU TIDAK
    i=0;                                                //i bernilai 0
    while(i!=panjanginput){                             //while loop 
        if(input[i]=='!'){                              //jika terdapat char '!',
            valid=1;                                    //maka valid bernilai 1
        }
        i++;                                            //increment i
    }
//=================PANJANG Depan & Belakang  
    if(valid==1){                                       //jika valid bernilai 1
        i=0;                                            //while loop
        while(input[i]!='!'){                           //sampa char '!'   
            panjangdepan++;                             //increment panjang array depan
            i++;                                        //increment i
        }
    }
        int panjangbelakang=panjanginput-panjangdepan-1;//panjang array belakang
        // printf("Valid = %d\n", valid);
        // printf("Panjang Input: %d\n", panjanginput);
        // printf("Panjang Depan: %d\n", panjangdepan);
        // printf("Panjang Belakang: %d\n", panjangbelakang);
//===============MASUKAN KE ARRAY TERPISAH
    char arrdepan[panjangdepan];                        //array untuk kata di depan
    i=0;                                                //isi i dengan nilai 0
    while (i!=panjangdepan){                            //while loop
        arrdepan[i]=input[i];                           //isikan ke array depan
        i++;                                            //increment i
    }
    arrdepan[i]='\0';                                   //null sebagai tutup array kata depan
    char arrbelakang[panjangbelakang];                  //array untuk kata belakang
    i=0;                                                //isi i dengan nilai 0
    while (i!=panjangbelakang){                         //while loop
        arrbelakang[i]=input[panjangdepan+i+1];         //isikan ke array belakang
        i++;                                            //iterasi i
    }
    arrbelakang[i]='\0';                                //pasang tutup array kata belakang
    // printf("Kata depan: %s\n", arrdepan);
    // printf("Kata belakang: %s\n", arrbelakang);

    i=0;                                                //isi i dengan 0
    j=0;                                                //isi j dengan 0
    n=0;                                                //isi n dengan 0
    do{                                                 //do while loop
        if(arrdepan[i]==arrbelakang[j]){                //jika arraydepan ke-i sama dengan array belakang ke-j
            j++;                                        //maka increment j
        }                                               
        else if(arrdepan[i]==arrbelakang[0]){           //jika arraydepan ke i sama dengan array belakang index ke 0
            j=1;                                        //maka j=1
        }
        else{                                           //jika kedua kondisi diatas tidak terpenuhi
            j=0;                                        //maka j=0
        }
        if(arrbelakang[j]=='\0'){                       //jika arraybelakang ke j berisi null
            i=i+1-j;                                    //maka, i dikurangi j ditambah 1
            // for(k=i; arrdepan[k]!='\0'; k++){           
            //     arrdepan[k]=arrdepan[k+j];
            // }
            k=i;                                        //k bernilai i
            while(arrdepan[k]!='\0'){                   //while loop
                arrdepan[k]=arrdepan[k+j];              //array depan indeks ke-k diisi dengan indek ke-k+j di depannya
                k++;                                    //increment k
            }
            j=0;                                        //j bernilai 0
            i--;                                        //decrement i
        }
        i++;                                            //increment i
    }while(arrdepan[i]!='\0');                          //jika isi arraydepan index ke-i null, maka loop berhenti
    // printf("hasil= %s\n", arrdepan);
//=======================================================================

    char copy[strlen(arrbelakang)];                     //array copy
    i=0;                                                //i bernilai 0
    do{                                                 //do while loop
        copy[i]=arrdepan[i];                            //isikan arraydepan ke array copy
        i++;                                            //increment i
    }while(arrbelakang[i]!='\0');                       //juka index arraybelakang ke-i bernilai null, maka loop berhenti
    // printf("copy= %s", copy);

    int banding=strcmp(copy, arrbelakang);              //integer bandingkan string
    if(banding==0){                                     //jika banding bernilai 0
        valid=0;                                        //maka valud bernilai 0
        // printf("compare=%d\n",strcmp(copy, arrbelakang));    
    }

    if(strlen(arrdepan)==0){                            //jika panjang array depan bernilai 0
        valid=0;                                        //maka valid bernilai 0
    }
    if(valid==0){                                       //jika valid bernilai 0, 
        printf("==== Inputan Tidak Valid! ====\n");     //maka hal di samping ni akan ditampilkan
    }
    else{                                               //jika kondisi diatas tidak terpenuhi
        printf("Tanpa kunci: %s\n\n", arrdepan);        //maka hal di samping ini akan ditampilkan

        printf("Enkripsi 1:\n");                        //enkripsi 1
        i=strlen(arrdepan);                             //i sepanjang array depan
        j=0;                                            //j bernilai 0
        do{                                             //do while loop
            if(i<3){                                    //jika i kecil dari 3
                printf("%c\n", arrdepan[i-1]);          //maka tampilkan char dengan enter
            }
            else{                                       //jika tidak
                printf("%c ", arrdepan[i-1]);           //maka tamplkan char dengan spasi
            }
            hasil[j]=arrdepan[i-1];                     //isikan array hasil
            j++;                                        //increment j
            i-=2;                                       //i kurang 2 setiap loop
        }while(i>0);                                    //jika i kecil dari 0, maka loop berhenti
        i=strlen(arrdepan)-1;                           //i sepanjang array depan kurang 1
        do{                                             //do while loop
            if(i<3){                                    //jika i kecil dari 3
                printf(" %c\n\n", arrdepan[i-1]);       //maka tampilkan char dengan enter
            }
            else{                                       //jika tidak
                printf(" %c", arrdepan[i-1]);           //maka tamplkan char dengan spasi
            }
            hasil[j]=arrdepan[i-1];                     //isikan array hasil
            j++;                                        //increment j
            i-=2;                                       //i dikurangi 2 setiap loop
        }while(i>0);                                    //jika i kecil dari 0, maka loop berhenti
        hasil[j]='\0';                                  //tutup array hasil

        printf("Enkripsi 2: %s\n", hasil);              //tampilkan array hasil sebagai enkripsi 2
    }

    return 0;                                           //digunakan untuk memberitahu bahwa kode telah selesai di esekusi dengan exit code 0
}