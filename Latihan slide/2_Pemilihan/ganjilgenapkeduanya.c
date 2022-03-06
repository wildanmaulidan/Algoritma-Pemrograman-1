#include<stdio.h>

int main(){
    int x1, x2;

    scanf("%d %d", &x1, &x2);

    if(x1%2==0 && x2%2==0){
        printf("keduanya genap, jadi kalau ditambahin hasilnya : %d\n", x1+x2);
    }
    else if(x1%2!=0 && x2%2!=0){
        printf("keduanya ganjil, jadi kalau dikalikan hasilnya : %d\n", x1*x2);
    }
    else{
        printf("input kasih yang sama, sama-sama ganjil atau sama-sama genap\n");
    }


    return 0;
}