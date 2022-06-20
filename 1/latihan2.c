#include<stdio.h>


int main(){
    int kue, ponakan;

    printf("Masukan jumlah kue: ");
    scanf("%d", &kue);

    printf("Masukan jumlah keponakan: ");
    scanf("%d", &ponakan);

    int pembagian=kue/ponakan;
    int sisa=(kue%ponakan);

    printf("masing-masing ponakan dapat %d kue dan bersisi %d kue", pembagian, sisa);
}