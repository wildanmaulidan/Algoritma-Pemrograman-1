#include<stdio.h>

typedef struct 
{
    int pembilang;
    int penyebut;
}pecahan;


int main(){
    pecahan p1, p2, p3;
    
    printf("Masukan pembilang dan penyebut pecahan pertama:\n");
    scanf("%d %d", &p1.pembilang, &p1.penyebut);
    printf("Masukan pembilang dan penyebut pecahan kedua:\n");
    scanf("%d %d", &p2.pembilang, &p2.penyebut);

    if(p1.penyebut==p2.penyebut){
        p3.pembilang=p1.pembilang+p2.pembilang;
        printf("Hasil penambahannya adalah =\npembilang:%d \npenyebut:%d", p3.pembilang, p2.penyebut);
    }
    else{
        p3.pembilang=p1.pembilang*p2.penyebut+p2.pembilang*p1.penyebut;
        p3.penyebut=p1.penyebut*p2.penyebut;
        printf("Hasil penambahannya adalah =\npembilang:%d \npenyebut:%d", p3.pembilang, p3.penyebut);
    }

    return 0;
}