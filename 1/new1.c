#include<stdio.h>

int main(){
    float number = 6.6;
    printf("%f\n", number);
    printf("%0.2f\n", number);

    int angkatan;
    char kelas;

    printf("Masukan kelas: ");
    scanf("%c", &kelas);

    printf("Masukan angkatan: ");
    scanf("%d", &angkatan);

    printf("Saya kelas %c angkatan %d\n", kelas, angkatan);

    return 0;
}

