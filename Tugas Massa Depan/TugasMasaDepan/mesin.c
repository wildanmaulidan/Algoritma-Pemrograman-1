/*Saya Muhammad Rizki mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahannya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. aamiin.*/

/*PENJELASAN SINGKAT TENTANG PROGRAM
    Inputan akan digunakan sebagai parameter dari prosedur tampil
    tentukan pada setiap char apakah kode ascii-nya bernilai puluhan atau ratusan==>untuk perhitungan looping nantinya
    angka yang akan ditampilkan ditentukan dari hasil kembalian fungsi bacaangka
    angka yang dihasilkan akan dijadikan acuan untuk proses pemilihan pola apa yang harus ditampilkan
    menampilkan pola 5 kali looping sesuai dengan pembagian jenis-jenis pola pada angka(dari atas ke bawah)
    memanggil prosedur pola yang sesuai
*/
#include "header.h"                                 //memanggil library header yang telah dibuat

int bacaangka(int *terbagi, int *pembagi){          //fungsi untuk membaca tiap angka kode ascii(menggunakan pemanggilan dengan pass by value untuk variabel parameternya)     
    int hasil;                                      //deklarasi variabek hasil
    hasil=*terbagi/ *pembagi;                       //variabel hasil merupakan hasil pembagian dari var pembagi dan var terbagi
    *terbagi-=*pembagi*hasil;                       //terbagi dikurangi pembagi kali dengan hasil
    *pembagi/=10;                                   //pembagi dibagi 10
    return hasil;                                   //nilai kembalian variabel hasil
}

void tampil(char huruf[100], int tbl){              //prosedur penentuan pola
    int loop, n, p, q, k=0, satuan;                 //deklarasi variabel untuk perhitungan pola dan looping                                           
    for(loop=0; loop<5; loop++){                    //for loop sebanyak 5 kali     
        i=0;                                        //assignment i
        while(huruf[i]!='\0'){                      //while loop sampai ujung string
            p=huruf[i];                         //p==>variabel penampung kode ascii, aka dibaca satu-persatu angkanya meelalui operasi aritmatika
            if(huruf[i]>=100){                      //jika kode ascii bernilai ratusan, maka...
                satuan=3;                           //sataun==>variabel untuk perulangan penampilan pola ascii bernilai 3
                q=100;                              //q==>variabel q diisi nilai 100, yang nantinya akan dipakai untuk membagi variabel p
            }
            else if(huruf[i]<100){                  //jika kode ascii bernilai ratusan, maka...
                satuan=2;                           //sataun==>variabel untuk perulangan penampilan pola ascii bernilai 2
                q=10;                               //q==>variabel q diisi nilai 10, yang nantinya akan dipakai untuk membagi variabel p
            }
            for(j=0; j<satuan; j++){                //for loop sebanyak variabel satuan         
                n=bacaangka(&p, &q);                //assignment n dengan hasil dari fungsi baca angka
                /*AWAL PENENTUAN PROSEDUR POLA YANG AKAN DIPANGGIL*/
                //BAGIAN 1
                if(loop==0 && (n==0 || n==2 || n==5 || n==6 || n==8 || n==9)){//jika loop petama dan hasil pembagian adalah 0, 2, 5, 6, 8, 9, maka...
                    if(huruf[i+1]!='\0' || j!=satuan-1){//jika bukan merupakan huruf paling akhir dan kode angka paling akhir
                        pola_010(tbl);             //maka panggil pola berikut
                    }
                    else{                           //jika tidak
                        pola_01(tbl);              //maka panggil pola berikut(tampa spasi di akhirnya)
                    }                               //--------------------------------------------------------
                }                                   //proses akan berulanh sampai 5 kali
                else if(loop==0 && n==1){           //karena setiap pola angka jika dibag-bagi
                    pola_1(tbl);                   //dari atass hingga bawah, maka dapat dibentuk dari 5 bagian
                }                                   //--------------------------------------------------------
                else if(loop==0 && n==3){           //percabangan akan dibuat menyesuaikan dengan 5 bagian 
                    if(huruf[i+1]!='\0' || j!=satuan-1){//yang dibutuhkan masing-masing pola
                        pola_10(tbl);              //--------------------------------------------------------
                    }
                    else{
                        pola_1(tbl);
                    }
                }
                else if(loop==0 && n==4){
                    pola_101(tbl);
                }
                else if(loop==0 && n==7){
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_110(tbl);
                    }
                    else{
                        pola_11(tbl);
                    }
                }
                //BAGIAN 2
                else if(loop==1 && (n==0 || n==4 || n==8 || n==9)){
                    pola_101(tbl);
                }
                else if(loop==1 && (n==2 || n==7)){
                    pola_001(tbl);
                }
                else if(loop==1 && (n==5 || n==6)){
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_100(tbl);
                    }
                    else{
                        pola_1(tbl);
                    }
                }
                else if(loop==1 && n==1){
                    pola_1(tbl);
                }
                else if(loop==1 && n==3){
                    pola_01(tbl);
                }
                //BAGIAN 3
                else if(loop==2 && n==0){
                    pola_101(tbl);
                }
                else if(loop==2 && n==7){
                    pola_001(tbl);
                }
                else if(loop==2 && (n==2 || n==4 || n==5 || n==6 || n==8 || n==9)){
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_010(tbl);
                    }
                    else{
                        pola_01(tbl);
                    }
                }
                else if(loop==2 && n==1){
                    pola_1(tbl);
                }
                else if(loop==2 && n==3){
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_10(tbl);
                    }
                    else{
                        pola_1(tbl);
                    }
                }
                //BAGIAN 4
                else if(loop==3 && (n==0 || n==6 || n==8)){
                    pola_101(tbl);
                }
                else if(loop==3 && n==2){
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_100(tbl);
                    }
                    else{
                        pola_1(tbl);
                    }
                }
                else if(loop==3 && (n==4 || n==5 || n==6 || n==7 || n==9)){
                    pola_001(tbl);
                }
                else if(loop==3 && n==1){
                    pola_1(tbl);
                }
                else if(loop==3 && n==3){
                    pola_01(tbl);
                }
                //BAGIAN 5
                else if(loop==4 && (n==0 || n==2 || n==5 || n==6 || n==8 || n==9)){
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_010(tbl);
                    }
                    else{
                        pola_01(tbl);
                    }
                }
                else if(loop==4 && (n==4 || n==7)){
                    pola_001(tbl);
                }
                else if(loop==4 && n==1){
                    pola_1(tbl);
                }
                else if(loop==4 && n==3){;
                    if(huruf[i+1]!='\0' || j!=satuan-1){
                        pola_10(tbl);
                    }
                    else{
                        pola_1(tbl);
                    }
                }
                /*AKHIR PENENTUAN PROSEDUR POLA YANG AKAN DIPANGGIL*/
                if(huruf[i+1]!='\0' || j!=satuan-1){//jika belum sampai di ujung pola dari angka atau belum sampai pada akhir huruf dari kalimat
                    spasi(tbl);                     //maka panggil prosedur menampilkan spasi
                }
            }
            i++;                                    //increment i
            if(huruf[i]!='\0'){                     //jika belum sampai pada akhir huruf pada kata
                spasi(tbl);                         //maka tampilkan spasi
            }
        }
        printf("\n");                               //enter
        //pemilihan untuk menampilkan pola sebanyak ketebalan yang diminta
        k++;                                        //increment k
        if(k<tbl){                                  //jika k lebih kecil dari ketebalan
            loop--;                                 //maka increment loop
        }
        else{                                       //jika tidak
            k=0;                                    //assignment k dengan 0
        }
    }
}

void pola_010(int angka){                           //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
}
void pola_101(int angka){                           //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
}
void pola_001(int angka){                           //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
}
void pola_100(int angka){                           //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
}
void pola_110(int angka){                           //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
}
void pola_1(int angka){                             //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
}
void pola_10(int angka){                            //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
}
void pola_01(int angka){                            //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
}
void pola_11(int angka){                            //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
    for(int i=0; i<angka; i++){                     //for loop tampilkan B
		printf("B");	
	}
}
void spasi(int angka){                              //prosedur pola 
    for(int i=0; i<angka; i++){                     //for loop tampilkan spasi
		printf(" ");	
	}
}