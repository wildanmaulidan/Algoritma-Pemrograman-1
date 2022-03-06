#include<stdio.h>

int main(){
    int n;
    int i, j;
    int sum=0;
    scanf("%d", &n);
    int bil[n];
    for(i=0; i<n; i++){
        scanf("%d", &bil[i]);
        sum+=bil[i];
    }
    printf("rata-rata = %d\n", sum/n);


    return 0;
}