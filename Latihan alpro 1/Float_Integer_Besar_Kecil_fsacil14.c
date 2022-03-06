#include<stdio.h>

typedef struct 
{
    int input;
}bilbulat;

typedef struct 
{
    double input;
    int depan;
    int belakang;
}bildesimal;

int main(){
    int i, j;
    bildesimal datades[3];
    for(i=0; i<3; i++){
        scanf("%lf", &datades[i].input);
        datades[i].depan=datades[i].input;
        datades[i].input=(datades[i].input-datades[i].depan)*100+0.5;
        datades[i].belakang=datades[i].input;
    }

    bilbulat databilbul[3];
    for(i=0; i<3; i++){
        scanf("%d", &databilbul[i].input);
    }

    int val=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(datades[j].depan%databilbul[i].input==0 && datades[j].belakang%databilbul[i].input==0){
                val++;
            }
        }
    }

    // printf("valid = %d\n", val);
    if(val>=2){
        printf("valid\n");
    }
    else{
        printf("tidak valid\n");
    }


    return 0;
}