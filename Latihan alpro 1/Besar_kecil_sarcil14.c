#include<stdio.h>

int main(){
    int i, j;
    int besar[3];
    int kecil[3];
    int val=0;

    for(i=0; i<3; i++){
        scanf("%d", &besar[i]);
    }
    for(i=0; i<3; i++){
        scanf("%d", &kecil[i]);
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(besar[j]%kecil[i]==0){
                val++;
                if(val==2){
                    printf("valid\n");
                    j=3;
                    i=3;
                }
            }
            else{
                val=0;
            }
        }
    }
    if(val!=2){
        printf("tidak valid\n");
    }
    return 0;
}