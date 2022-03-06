/*Saya Muhammad Rizki mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahannya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. aamiin.*/
#include<stdio.h>
#include<string.h>

int i, j, k;

int konversASCII(char huruf);
void tampil(int angka[100], char huruf[100], int n);
void pola_010(int angka);
void pola_101(int angka);
void pola_001(int angka);
void pola_100(int angka);
void pola_110(int angka);
void pola_1(int angka);
void pola_10(int angka);
void pola_01(int angka);
void spasi(int angka);


int main(){
    char kata[100];
    int n;
    int ascii[100];
    scanf("%s", &kata);
    scanf("%d", &n);
    i=0;
    while(kata[i]!='\0'){
        ascii[i]=konversASCII(kata[i]);
        i++;
    }
    i=0;
    while(kata[i]!='\0'){
        printf("%d\n",ascii[i]);
        i++;
    }

    tampil(ascii, kata, n);

    return 0;
}

int konversASCII(char huruf){
    int ascii=huruf;
    return ascii;
}

void tampil(int angka[100], char huruf[100], int bnyk){
    int loop, n, p, q;
    k=0;
    for(loop=0; loop<5; loop++){
        i=0;
        while(huruf[i]!='\0'){
            if(huruf[i]>=100){
                p=huruf[i];
                q=100;
                for(j=0; j<3; j++){
                    n=p/q;
                    //bagian 1
                    if(loop==0 && (n==0 || n==2 || n==5 || n==6 || n==8 || n==9)){
                        pola_010(bnyk);
                    }
                    else if(loop==0 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==0 && n==3){
                        pola_10(bnyk);
                    }
                    else if(loop==0 && n==4){
                        pola_101(bnyk);
                    }
                    else if(loop==0 && n==7){
                        pola_110(bnyk);
                    }
                    //bagian 2
                    else if(loop==1 && (n==0 || n==4 || n==8 || n==9)){
                        pola_101(bnyk);
                    }
                    else if(loop==1 && (n==2 || n==7)){
                        pola_001(bnyk);
                    }
                    else if(loop==1 && (n==5 || n==6)){
                        pola_100(bnyk);
                    }
                    else if(loop==1 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==1 && n==3){
                        pola_01(bnyk);
                    }
                    //bagian 3
                    else if(loop==2 && n==0){
                        pola_101(bnyk);
                    }
                    else if(loop==2 && n==7){
                        pola_001(bnyk);
                    }
                    else if(loop==2 && (n==2 || n==4 || n==5 || n==6 || n==8 || n==9)){
                        pola_010(bnyk);
                    }
                    else if(loop==2 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==2 && n==3){
                        pola_10(bnyk);
                    }
                    //bagian 4
                    else if(loop==3 && (n==0 || n==6 || n==8)){
                        pola_101(bnyk);
                    }
                    else if(loop==3 && n==2){
                        pola_100(bnyk);
                    }
                    else if(loop==3 && (n==4 || n==5 || n==6 || n==7 || n==9)){
                        pola_001(bnyk);
                    }
                    else if(loop==3 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==3 && n==3){
                        pola_01(bnyk);
                    }
                    //bagian 5
                    else if(loop==4 && (n==0 || n==2 || n==5 || n==6 || n==8 || n==9)){
                        pola_010(bnyk);
                    }
                    else if(loop==4 && (n==4 || n==7)){
                        pola_001(bnyk);
                    }
                    else if(loop==4 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==4 && n==3){
                        pola_10(bnyk);
                    }
                    p-=q*n;
                    q/=10;
                    if(huruf[i+1]!='\0' || j!=2){
                        spasi(bnyk);
                    }
                }
            }
            else if(huruf[i]<100){
                p=huruf[i];
                q=10;
                for(j=0; j<2; j++){
                    n=p/q;
                    //bagian 1
                    if(loop==0 && (n==0 || n==2 || n==5 || n==6 || n==8 || n==9)){
                        pola_010(bnyk);
                    }
                    else if(loop==0 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==0 && n==3){
                        pola_10(bnyk);
                    }
                    else if(loop==0 && n==4){
                        pola_101(bnyk);
                    }
                    else if(loop==0 && n==7){
                        pola_110(bnyk);
                    }
                    //bagian 2
                    else if(loop==1 && (n==0 || n==4 || n==8 || n==9)){
                        pola_101(bnyk);
                    }
                    else if(loop==1 && (n==2 || n==7)){
                        pola_001(bnyk);
                    }
                    else if(loop==1 && (n==5 || n==6)){
                        pola_100(bnyk);
                    }
                    else if(loop==1 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==1 && n==3){
                        pola_01(bnyk);
                    }
                    //bagian 3
                    else if(loop==2 && n==0){
                        pola_101(bnyk);
                    }
                    else if(loop==2 && n==7){
                        pola_001(bnyk);
                    }
                    else if(loop==2 && (n==2 || n==4 || n==5 || n==6 || n==8 || n==9)){
                        pola_010(bnyk);
                    }
                    else if(loop==2 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==2 && n==3){
                        pola_10(bnyk);
                    }
                    //bagian 4
                    else if(loop==3 && (n==0 || n==6 || n==8)){
                        pola_101(bnyk);
                    }
                    else if(loop==3 && (n==4 || n==5 || n==6 || n==7 || n==9)){
                        pola_001(bnyk);
                    }
                    else if(loop==3 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==3 && n==3){
                        pola_01(bnyk);
                    }
                    //bagian 5
                    else if(loop==4 && (n==0 || n==2 || n==5 || n==6 || n==8 || n==9)){
                        pola_010(bnyk);
                    }
                    else if(loop==4 && (n==4 || n==7)){
                        pola_001(bnyk);
                    }
                    else if(loop==4 && n==1){
                        pola_1(bnyk);
                    }
                    else if(loop==4 && n==3){
                        pola_10(bnyk);
                    }
                    p-=q*n;
                    q/=10;
                    if(huruf[i+1]!='\0' || j!=1){
                        spasi(bnyk);
                    }
                }
            }
            i++;
            if(huruf[i]!='\0'){
                spasi(bnyk);
            }
        }
        printf("\n");
        k++;
        if(k<bnyk){
            loop--;
        }
        else{
            k=0;
        }
    }
}

void pola_010(int angka){
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
        for(int j=0; j<angka; j++){
			printf("B");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
}
void pola_101(int angka){
        for(int j=0; j<angka; j++){
			printf("B");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
        for(int j=0; j<angka; j++){
			printf("B");	
		}
}
void pola_001(int angka){
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
        for(int j=0; j<angka; j++){
			printf("B");	
		}
}
void pola_100(int angka){
        for(int j=0; j<angka; j++){
			printf("B");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
}
void pola_110(int angka){
        for(int j=0; j<angka; j++){
			printf("B");	
		}
        for(int j=0; j<angka; j++){
			printf("B");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
}
void pola_1(int angka){
        for(int j=0; j<angka; j++){
			printf("B");	
		}
}
void pola_10(int angka){
        for(int j=0; j<angka; j++){
			printf("B");	
		}
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
}
void pola_01(int angka){
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
        for(int j=0; j<angka; j++){
			printf("B");	
		}
}
void spasi(int angka){
        for(int j=0; j<angka; j++){
			printf(" ");	
		}
}