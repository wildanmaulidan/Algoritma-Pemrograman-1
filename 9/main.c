#include "header.h"

int main(){
    char nama_bos[50];
    char elemen_bos[50];
    char jurus_bos[50];
    int power_bos=0;
    scanf("%s%s%s", nama_bos, elemen_bos, jurus_bos);
//-------------------------------------------------------------------------------
    int n;
    scanf("%d", &n);
    char nama_warrior[n][50];
    char elemen_warrior[n][50];
    char jurus_warrior[n][50];
    int power_warrior[n];
    for(i=0; i<n; i++){
        power_warrior[i]=0;
        scanf("%s%s%s", nama_warrior[i], elemen_warrior[i], jurus_warrior[i]);
    }

    hitung_powerboss(jurus_bos, &power_bos);
    hitung_power_warr(n, nama_warrior, jurus_warrior, elemen_bos, elemen_warrior, power_warrior);
    elemen(n, elemen_warrior, elemen_bos, power_warrior);
    hasil(n, nama_warrior, power_warrior, &power_bos);

    return 0;
}