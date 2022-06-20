/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP9 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h" //memanggil header.h

void hitung_powerboss(char jurus_bos[50], int *power_bos){//prosedur perhitungan kekuatan bos
    int kata2=0, leng2=0;           //deklarasi sekalihus assignment variabel penampung ascii kata ke-2 dan panjang kata ke-2
    i=0;                            //isi variabel i dengan nilai 0
    while(jurus_bos[i]!='_'){       //while loop sampai index berisi karakter "_"
        *power_bos+=jurus_bos[i];   //menambahkan kode ascii
        i++;                        //increment i
    }
    i+=1;                           //i ditambah 1
    while(jurus_bos[i]!='\0'){      //while loop sampai index ujung isi array
        kata2+=jurus_bos[i];        //penambahan ascii kata ke-2
        leng2++;                    //increment variabel panjang kata
        i++;                        //increment i
    }
    *power_bos-=kata2/leng2;        //Kekuatan karakter dan boss dihitung dari selisih ascii dari kata pertama dengan ascii dari kata kedua dibagi dengan panjang kata kedua
    if(*power_bos<0){               //jika kekuatan bos bernilai negatif
        *power_bos*=-1;             //maka dikalikan -1
    }
    // printf("Kekuatan Boss: %d\n", *power_bos);
}

void hitung_power_warr(int n, char nama_warrior[n][50], char jurus_warrior[n][50], char elemen_bos[50], char elemen_warrior[n][50], int power_warrior[n]){//prosedur perhitungan kekuatan karakter
    for(i=0; i<n; i++){                            //for loop sebanyak n
        int kata2=0, leng2=0;                      //deklarasi sekalihus assignment variabel penampung ascii kata ke-2 dan panjang kata ke-2
        j=0;                                       //si variabel j dengan nilai 0
        while(jurus_warrior[i][j]!='_'){           //while loop sampai index berisi karakter "_"
            power_warrior[i]+=jurus_warrior[i][j]; //menambahkan kode ascii
            j++;                                   //increment j
        }
        j++;                                       //j ditambah 1
        while(jurus_warrior[i][j]!='\0'){          //while loop sampai index ujung isi array
            kata2+=jurus_warrior[i][j];            //penambahan ascii kata ke-2
            leng2++;                               //increment variabel panjang kata
            j++;                                   //increment j
        }
        power_warrior[i]-=kata2/leng2;             //Kekuatan karakter dan boss dihitung dari selisih ascii dari kata pertama dengan ascii dari kata kedua dibagi dengan panjang kata kedua
        if(power_warrior[i]<0){                    //jika kekuatan bernilai negatif
            power_warrior[i]=power_warrior[i]*-1;  //maka dikalikan -1
        }
        // printf("%s %d\n", nama_warrior[i], power_warrior[i]);
    }
}

void elemen(int n, char elemen_warrior[n][50], char elemen_bos[50], int power_warrior[n]){//prosedur perhitungan elemen
        for(j=0;j<n; j++){                                                                          //for loop sebanyak n
            if(strcmp(elemen_warrior[j], "Water")==0 && strcmp(elemen_bos, "Fire")==0){             //jika elemen karakter menang melawan 
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);                        //elemen karakter bos, maka
            }                                                                                       //karakter mendapat peninglatan kekuatan sebanyak 40% kekuatan awal
            else if(strcmp(elemen_warrior[j], "Fire")==0 && strcmp(elemen_bos, "Wind")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Wind")==0 && strcmp(elemen_bos, "Lightning")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Lightning")==0 && strcmp(elemen_bos, "Earth")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Earth")==0 && strcmp(elemen_bos, "Water")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            //=====================================================================================
            else if(strcmp(elemen_bos, "Water")==0 && strcmp(elemen_warrior[j], "Fire")==0){        //jika elemen bos menang   
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);                        //melawan elemen karakter, maka
            }                                                                                       //karakter mendapat pengurangan kekuatan sebanyak 30% kekuatan awal
            else if(strcmp(elemen_bos, "Fire")==0 && strcmp(elemen_warrior[j], "Wind")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Wind")==0 && strcmp(elemen_warrior[j], "Lightning")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Lightning")==0 && strcmp(elemen_warrior[j], "Earth")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Earth")==0 && strcmp(elemen_warrior[j], "Water")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
        }
}

void hasil(int n, char nama_warrior[n][50], int power_warrior[n], int *power_bos){//prosedur untuk menampilkan hasil perhitungan
    printf("Kekuatan Boss: %d\n", *power_bos);  //tampilkan kekuatan bos
    printf("=====================\n");  
    // for(i=0; i<n; i++){
    //     printf("%s %d\n", nama_warrior[i], power_warrior[i]);
    // }
    int ada=0;                                  //deklarasi sekaligus assignment variabel integer ada untuk penentuan isi jenis
    printf("Superior\n");
    printf("=====================\n");
    printf("---------------------\n");
    for(i=0; i<n; i++){                         //for lop sebanyak n
        if(power_warrior[i]>*power_bos){        //jika kekuatan karakter lebih besar dari kekuatan bos, maka 
            printf("%s %d\n",  nama_warrior[i], power_warrior[i]); //tampilkan nama karakter dan kekuatan karrakter index ke-i
            ada=1;                              //variabel ada diisi 1
        }
    }
    if(ada==0){                                 //jika variabel ada bernilai 0, maka
        printf("Tidak ada karakter Superior\n");//tampilkan ini
    }
    printf("---------------------\n");
    printf("=====================\n");
    ada=0;                                      //isi ada dengan nilai 0
    printf("Inferior\n");
    printf("=====================\n");
    printf("---------------------\n");
    for(i=0; i<n; i++){                         //for loor sebanyak n
        if(power_warrior[i]<*power_bos){        //jika kekuatan bos lebih besar dari kekuatan karakter, maka
            printf("%s %d\n",  nama_warrior[i], power_warrior[i]);  //tampilkan nama karakter dan kekuatan karrakter index ke-i
            ada=1;                              //ada bernilai 1
        }
    }
    if(ada==0){                                 //jika variabel ada bernilai 0, maka
        printf("Tidak ada karakter Inferior\n");//tapilkan ini
    }
    printf("---------------------\n");
}