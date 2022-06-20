#include"header.h"

void hitung(int n, int nilai[n]){

    for(i=0; i<n; i++){
        if(nilai[i] >= 90 && nilai[i] <= 100){
            nilai[i] = 65;
        }
        else if(nilai[i] >= 80 && nilai[i] <= 89){
            nilai[i] = 66;
        }
        else if(nilai[i] >= 70 && nilai[i] <= 79){
            nilai[i] = 67;
        }  
        else if(nilai[i] >= 60 && nilai[i] <= 69){
            nilai[i] = 68;
        }
        else if(nilai[i] <= 59){
            nilai[i] = 69;
        }
    }

}

void out(int n, char nama[n][30], int nilai[n]){

    int A=65, no;
    char predikat;
    for(i=0; i<5; i++){
        no=0;
        printf("Predikat %c:\n", predikat=A);
        printf("--------------------------\n");
        for(j=0; j<n; j++){
            if(nilai[j] == A){
                printf("%d. %s\n", no+1, nama[j]);
                no++;
            }
        }
        if(no == 0){
            printf("Tidak ada data.\n");
        }
        printf("--------------------------\n");
        A++;
    }

}