#include<stdio.h>

int main(){
    int n;
    int i, j;
    int sum=0;
    scanf("%d", &n);
    int bil[n];
    int min=999;
    int indexmin=0;
    for(i=0; i<n; i++){
        scanf("%d", &bil[i]);
        if(i%2==0){
            if(bil[i]<min){
                min=bil[i];
                indexmin=i;
            }
        }
    }
    printf("Nilai minimal pada index genap ke %d = %d\n", indexmin, min);



    return 0;
}