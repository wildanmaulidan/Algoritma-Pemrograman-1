#include<stdio.h>

typedef struct 
{
    int nim;
    int nilai;
}mahasiswa;

int main(){
    mahasiswa pertama, kedua, ketiga; 
    printf("Masukan NIM mahasiswa pertama:");
    scanf("%d", &pertama.nim);
    printf("Masukan Nilai mahasiswa pertama:");
    scanf("%d", &pertama.nilai);
    printf("Masukan NIM mahasiswa kedua:");
    scanf("%d", &kedua.nim);
    printf("Masukan Nilai mahasiswa kedua:");
    scanf("%d", &kedua.nilai);
    printf("Masukan NIM mahasiswa ketiga:");
    scanf("%d", &ketiga.nim);
    printf("Masukan Nilai mahasiswa ketiga:");
    scanf("%d", &ketiga.nilai);

    if(pertama.nim>kedua.nim && pertama.nim>ketiga.nim){
        printf("NIM Mahasiswa pertama paling besar\n");
    }
    else if(pertama.nim<kedua.nim && kedua.nim>ketiga.nim){
        printf("NIM Mahasiswa kedua paling besar\n");
    }
    else{
        printf("NIM Mahasiswa ketiga paling besar\n");
    }

    return 0;
}