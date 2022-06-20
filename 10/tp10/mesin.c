/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP10 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include "header.h"                  //memanggil library header.h

int jumlahkode(data agen[]){        //fungsi jumlah kode
    int sum=0;                      //deklarasi sekaligus assignment varibael jumlah
    for(j=0; j<agen[i].n; j++){     //for loop sebanyak jumlah kode
        sum+=agen[i].kode[j];       //penambahan jumlah kode
    }
    if(agen[i].nama[0]=='B'){       //jika inisial adalah 'B'
        sum*=2;                     //maka jumlah dikali 2
    }
    return sum;                     //value kembalian adalah sum
}

void sort(data agen[]){                                 //prosedur pengurutan
    int temp;                                           //variabel integer penampung sementara
    char templagi[10];                                  //variabel penampung char sementara
	for(i=0; i<3; i++){                                 //for loop sebanyak 3 kali
		for(j=0; j<3-i-1; j++){                         //for loop lagi
			if(agen[j].sumkode>agen[j+1].sumkode){      //jika jumlah kode index lebih besar, maka
				temp=agen[j].sumkode;                   //******
				agen[j].sumkode=agen[j+1].sumkode;      //tukarkan isi jumlah kode
				agen[j+1].sumkode=temp;                 //******

                strcpy(templagi,agen[j].nama);          //******
                strcpy(agen[j].nama, agen[j+1].nama);   //tukarkan nama
                strcpy(agen[j+1].nama, templagi);       //******

                for(k=0; k<10; k++){                    //for loop sebanyak 10 kali
				    temp=agen[j].kode[k];               //******
				    agen[j].kode[k]=agen[j+1].kode[k];  //tukarkan kode
				    agen[j+1].kode[k]=temp;             //******
                }
				temp=agen[j].n;                         //******
				agen[j].n=agen[j+1].n;                  //tukarkan jumlah kode
				agen[j+1].n=temp;                       //
			}
		}
	}
    printf("Urutan :\n");                               //tampilkan urutan
    for(i=0; i<3; i++){                                 //for loop sebanyak 3 kali
        if(agen[i].nama[0]=='B'){                       //jika inisial B
            printf("- Boba dan Bobi\n");                //maka tampilkan hal berikut
        }
        else{                                           //jika tidak
            printf("- %s\n", agen[i].nama);             //maka tampilkan string nama
        }
    }
}

void tampilenkripsi(data agen[]){               //prosedur enkripsi
    int ch;                                     //variabel penampung ascii sementara
    printf("\nKode Enkripsi :\n");              //tampilkan kode enkripsi
    for(i=0; i<3; i++){                         //for loop sebanyak 3 kali
        for(j=0; j<strlen(agen[i].nama);j++){   //for loop sebanyak panjang string
            agen[i].kode[j]%=26;                //kode dimodulus 26
            ch=agen[i].nama[j];                 //isi variabel ascii sementara
            if(ch>='a' && ch<='z'){             //jika isi index string tersebut adalah alfabet kecil, maka
                ch=ch+agen[i].kode[j];          //huruf maju sebanyak nilai kode
                if(ch>122){                     //jika isi index lebih besar dari z, maka
                    ch=ch-'z'+'a'-1;            //isi index dimasukan lagi ke rentang huruf kecil menurut kode ascii
                }
                agen[i].nama[j]=ch;             //isi index dari array nama
                
            }
            else if(ch>='A'&& ch<='Z'){         //jika isi index string tersebut adalah alfabet kapiital, maka
                ch=ch+agen[i].kode[j];          //huruf jau sebanyak nilai kode
                if(ch>'Z'){                     //jika isi index lebih besar dari Z, maka 
                    ch=ch-'Z'+'A'-1;            //isi index dimasukan lagi ke rentang huruf kapital menurut kode ascii
                }
                agen[i].nama[j]=ch;             //isi index dari array nama
                
            }                               
            printf("%c", agen[i].nama[j]);      //tampilkan hasil enkripsi
        }
    }
    printf("\n");                               //enter
}