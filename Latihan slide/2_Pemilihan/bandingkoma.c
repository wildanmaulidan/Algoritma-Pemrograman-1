#include<stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    printf("Angka masukan : %f\n", x);
    int depan = x;
    int belakang = (x-depan)*100;

    printf("Angka depan : %d\n", depan);
    printf("Angka belakang : %d\n", belakang);

    if(depan%belakang==0){
        printf("bilangan depan koma adalah kelipatan dari bilangan di belakang koma\n");
    }
    else{
        printf("bilangan depan koma BUKAN kelipatan dari bilangan di belakang koma\n");
    }
    
    return 0;
}