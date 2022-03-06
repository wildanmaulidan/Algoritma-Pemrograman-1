#include<stdio.h>

int main(){
    int bil[6];
    int i;
    int gage[6];
    int gangen=0;
    for(i=0; i<6; i++){
        scanf("%d", &bil[i]);
        if(bil[i]%2==0){
            gangen++;
        }
        else{
            gangen--;
        }
    }


    int indexgenap=0;
    int indexganjil=1;
    if(gangen==0){
        for(i=0; i<6; i++){
            if(bil[i]%2==0){
                gage[indexgenap]=bil[i];
                indexgenap+=2;
            }
            else if(bil[i]%2==1){
                gage[indexganjil]=bil[i];
                indexganjil+=2;
            }
            // printf("[%d] Hasil mod index ke-%d = %d\n", bil[i], i, bil[i]%2);
        }
        for(i=0; i<6; i++){
            printf("%d\n", gage[i]);
        }
    }
    else{
        printf("tidak valid\n");
    }

    // printf("jumlah ganjil = %d\n", indexganjil);
    // printf("jumlah genap = %d\n", indexgenap);


    return 0;
}