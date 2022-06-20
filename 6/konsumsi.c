#include<stdio.h>

typedef struct 
{
    char kode;
    int binerstok[8];
    int stok;
    char nama[100];
    int jmlhambil;
    int hitunghuruf;
}konsumsi;

int main(){
    int n, i, j;
//========================MINTA INPUT=================================
    scanf("%d", &n);
    konsumsi data[n]; 
    for(i=0; i<n; i++){
        scanf(" %c",  &data[i].kode);
        // scanf("%d",  &data[i].binerstok);
        j=0;
        scanf(" %d", &data[i].binerstok[j]);
        while(j!=7){
            j++;
            scanf(" %d", &data[i].binerstok[j]);
        }
        data[i].hitunghuruf=0;  
        j=0;
        scanf(" %c", &data[i].nama[j]);
        while(data[i].nama[j]!=';'){
            j++;
            scanf(" %c", &data[i].nama[j]);
            data[i].hitunghuruf+=1;            
        }
        scanf("%d", &data[i].jmlhambil);
    }
//---------------------------------------------
        // i=0;
        // int hitungambil=0;
        // scanf(" %c", &data[i].ambil);
        // while(data[i].ambil!='*'){
        //     i++;
        //     scanf(" %c", &data[i].ambil);
        //     hitungambil+=1;
        // }
//----------------------------------------------
    // i=0;
    // int hitungambil=0;
    // for(j=0; j<=i; j++){
    //     scanf(" %c", &data[j].ambil);
    //     if(data[j].ambil!='*'){
    //         i++;
    //         hitungambil++;
    //     }
    // }
//---------------------------------------------
    // bool loop=true;
    // i=0;
    // int hitungambil=0;
    // while (loop){
    //     scanf(" %c", &data[i].ambil);
    //     i++;
    //     hitungambil++;
    //     if(data[i].ambil=='*'){
    //         loop = false;
    //         hitungambil=0;
    //     }
    // }
    // bahasa c gak ada boolean><
//-------------------------------------------
    char ambil[100];
    int loop=1;
    i=0;
    int hitungambil=0;
    while (loop==1){
        scanf(" %c", &ambil[i]);
        if(ambil[i]=='*'){
            loop = 0;
        }
        i+=1;
        hitungambil+=1;
    }
    
//========================MINTA INPUT=================================
    
    // printf("%d\n%d\n",hitunghuruf, hitungambil-1);
    
    int duadipangkat=1;
    for(i=0; i<n; i++){
        data[i].stok=0;
        for(j=0; j<8;j++){
            if(data[i].binerstok[j]==1 && j==0){
                data[i].binerstok[j]=128;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==1){
                data[i].binerstok[j]=64;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==2){
                data[i].binerstok[j]=32;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==3){
                data[i].binerstok[j]=16;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==4){
                data[i].binerstok[j]=8;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==5){
                data[i].binerstok[j]=4;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==6){
                data[i].binerstok[j]=2;
                data[i].stok+=data[i].binerstok[j];
            }
            else if(data[i].binerstok[j]==1 && j==7){
                data[i].stok+=1;
            }
            else{
                data[i].binerstok[j]=0;
                data[i].stok+=data[i].binerstok[j];
            }
            
        }
        // printf("konversi %d: %d\n", i+1,data[i].stok);
    }

    printf("Stok Makanan Awal\n");
    for(i=0; i<n; i++){
        printf("- %c ", data[i].kode);
        
        loop=1;
        j=0;
        while(loop==1){
            printf("%c", data[i].nama[j]);
            j++;
            if(data[i].hitunghuruf==j){
                loop=0;
            }
        }

        printf(" %d\n", data[i].stok);
    }

    printf("\n");
    
    for(i=0; i<n; i++){
        for(j=0; j<hitungambil-1; j++){
            if(ambil[j]==data[i].kode){
                data[i].stok-=data[i].jmlhambil;
            }
        }
    }

    if(hitungambil-1==0){
        printf("---Stok Tetap---\n");
    }
    else{
        printf("Stok Makanan Update\n");
        for(i=0; i<n; i++){
            printf("- %c ", data[i].kode);
            loop=1;
            j=0;
            while(loop==1){
                printf("%c", data[i].nama[j]);
                j++;
                if(data[i].hitunghuruf==j){
                    loop=0;
                }
            }
            if(data[i].stok>=0){
                printf(" %d\n", data[i].stok);
            }
            else{
                printf(" %d\n", 0);
            }
            
        }
    }

    

    return 0;
}
