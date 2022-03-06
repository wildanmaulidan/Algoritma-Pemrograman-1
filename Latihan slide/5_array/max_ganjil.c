#include<stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    int bil[n];
    int max=0;
    for(i=0; i<n; i++){
        scanf("%d", &bil[i]);
        if(bil[i]%2!=0){
            if(bil[i]>max){
                max=bil[i];
            }
        }
    }



    printf("Bilangan ganjil terbesar adalah = %d\n", max);

    return 0;
}