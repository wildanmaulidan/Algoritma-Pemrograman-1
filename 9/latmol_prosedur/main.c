#include"header.h"

int main(){
    int n;
    scanf("%d", &n);
    char nama[n][30];
    int nilai[n];

    for(i=0; i<n; i++){
        scanf("%s%d", nama[i], &nilai[i]);
    }

    hitung(n, nilai);
    out(n, nama, nilai);

    return 0;
}