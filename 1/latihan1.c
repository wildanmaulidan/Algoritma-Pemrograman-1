#include<stdio.h>

int main(){
    float diameter, tinggi, hasil;

    printf("masukan diameter: ");
    scanf("%f", &diameter);

    printf("masukan tinggi: ");
    scanf("%f", &tinggi);

    hasil=(3.14*((diameter/2)*(diameter/2)))*tinggi;

    printf("\nHasilnya : %.2f", hasil);

    return 0;
}