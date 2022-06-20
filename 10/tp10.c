/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP8 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>
#include<string.h>

int i, j, k;

typedef struct 
{
    char inisial[10];
    int kode[20];
    int sumkode;
    int n;
}data;

void jumlahkode(data agen[]){
    for(i=0; i<3; i++){
        agen[i].sumkode=0;
        for(j=0; j<agen[i].n; j++){
            agen[i].sumkode+=agen[i].kode[j];
        }
        if(agen[i].inisial[0]=='B'){
            agen[i].sumkode*=2;
        }
    }
}

void sort(data agen[]){
    int temp;
    char templagi[10];
	for(i=0; i<3; i++){
		for(j=0; j<3-i-1; j++){
			if(agen[j].sumkode>agen[j+1].sumkode){
				temp=agen[j].sumkode;
				agen[j].sumkode=agen[j+1].sumkode;
				agen[j+1].sumkode=temp;

                strcpy(templagi,agen[j].inisial);
                strcpy(agen[j].inisial, agen[j+1].inisial);  
                strcpy(agen[j+1].inisial, templagi);              

                for(k=0; k<10; k++){
				    temp=agen[j].kode[k];
				    agen[j].kode[k]=agen[j+1].kode[k];
				    agen[j+1].kode[k]=temp;
                }
				temp=agen[j].n;
				agen[j].n=agen[j+1].n;
				agen[j+1].n=temp;
			}
		}
	}
}

void tampilurutan(data agen[]){
    printf("Urutan :\n");
    for(i=0; i<3; i++){
        if(agen[i].inisial[0]=='B'){
            printf("- Boba dan Bobi\n");
        }
        else{
            printf("- %s\n", agen[i].inisial);
        }
    }

}

void tampilnama(data agen[]){
    // for(i=0; i<3; i++){
    //     for(j=0; j<strlen(agen[i].inisial); j++){
    //         printf("%c", agen[i].inisial[j]);
    //     }
    //     printf("\n");
    //     for(j=0; j<strlen(agen[i].inisial); j++){
    //         printf("%d ", agen[i].kode[j]);
    //     }
    //     printf("\n");
    // }
}

void tampilenkripsi(data agen[]){
    int ch;
    printf("\nKode Enkripsi :\n");
    for(i=0; i<3; i++){                                        //for loop sebanyak n
        for(j=0; j<strlen(agen[i].inisial);j++){ 
            agen[i].kode[j]%=26;   
            printf("\n=================\nkode=%d|char=%c|ascii=%d\n", agen[i].kode[j], agen[i].inisial[j], agen[i].inisial[j]);
            ch=agen[i].inisial[j];            //for loop sebanyak panjang string
            if(ch>='a' && ch<='z'){      //jika isi index string tersebut adalah alfabet kecil, maka
                ch=ch+agen[i].kode[j];                 //huruf mundur sebanyak nilai kon
                if(ch>122){                          //jika isi index lebih kecil dari a, maka
                    ch=ch-'z'+'a'-1;       //isi index dimasukan lagi ke rentang huruf kecil menurut kode agen[i].kode[j]
                }
                agen[i].inisial[j]=ch;
                
            }
            else if(ch>='A'&& ch<='Z'){ //jika isi index string tersebut adalah alfabet kapiital, maka
                ch=ch+agen[i].kode[j];                 //huruf mundur sebanyak nilai kon
                if(ch>'Z'){                          //jika isi index lebih kecil dari A, maka 
                    ch=ch-'Z'+'A'-1;       //isi index dimasukan lagi ke rentang huruf kapital menurut kode ascii
                }
                agen[i].inisial[j]=ch;
                
            }
            printf("<%d - %c>", agen[i].inisial[j], agen[i].inisial[j]);
        }
    }
}



int main(){
    data agen[3];
    for(i=0; i<3; i++){
        scanf(" %c", &agen[i].inisial[0]);
        if(agen[i].inisial[0]=='B'){
            strcpy(agen[i].inisial, "BobaBobi");
            agen[i].n=4;
            for(j=0; j<agen[i].n; j++){
                scanf("%d", &agen[i].kode[j]);
                agen[i].kode[4+j]=agen[i].kode[j];
            }
            
        }
        else if(agen[i].inisial[0]=='N'){
            strcpy(agen[i].inisial, "Natasha");
            agen[i].n=7;
            for(j=0; j<agen[i].n; j++){
                scanf("%d", &agen[i].kode[j]);
            }
        }
        else if(agen[i].inisial[0]=='W'){
            strcpy(agen[i].inisial, "Wanda");
            agen[i].n=5;
            for(j=0; j<agen[i].n; j++){
                scanf("%d", &agen[i].kode[j]);
            }
        }
    }
    // for(i=0; i<3; i++){
    //     printf("\n");
    //     printf("%s\n", agen[i].inisial);
    //     if(agen[i].inisial[0]=='B'){
    //         for(j=0; j<4; j++){
    //             printf("%d ", agen[i].kode[j]);
    //         }
    //         printf("\n");
    //     }
    //     else if(agen[i].inisial[0]=='N'){
    //         for(j=0; j<7; j++){
    //             printf("%d ", agen[i].kode[j]);
    //         }
    //         printf("\n");
    //     }
    //     else if(agen[i].inisial[0]=='W'){
    //         for(j=0; j<5; j++){
    //             printf("%d ", agen[i].kode[j]);
    //         }
    //         printf("\n");
    //     }
    // }

    jumlahkode(agen);
    sort(agen);
    tampilurutan(agen);
    // tampilnama(agen);
    tampilenkripsi(agen);


    return 0;
}
/*
B
17 7 0 13
N
4 8 15 16 23 42 46
W
2 3 5 7 11

N
1 2 3 4 3 2 1
W
3 6 9 2 5
B
4 8 4 6
*/