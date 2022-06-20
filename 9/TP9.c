#include<stdio.h>
#include<string.h>


//==========================
    int i, j;
//=========================

//1111111111111111111111111111111111111111111111111111111111111
void hitung_powerboss(char jurus_bos[50], int *power_bos){
    int len=strlen(jurus_bos);
    int kata2=0, leng2=0;
    i=0;
    while(jurus_bos[i]!='_'){
        *power_bos+=jurus_bos[i];
        i++;
    }
    i+=1;
    while(jurus_bos[i]!='\0'){
        kata2+=jurus_bos[i];
        leng2++;
        i++;
    }
    *power_bos-=kata2/leng2;
    // printf("Kekuatan Boss: %d\n", *power_bos);
    // printf("=====================\n");
}
//1111111111111111111111111111111111111111111111111111111111111

//2222222222222222222222222222222222222222222222222222222222222
void hitung_power_warr(int n, char nama_warrior[n][50], char jurus_warrior[n][50], char elemen_bos[50], char elemen_warrior[n][50], int power_warrior[n]){
    for(i=0; i<n; i++){
        int len=strlen(jurus_warrior[i]);
        int kata2=0, leng2=0;
        j=0;
        while(jurus_warrior[i][j]!='_'){
            power_warrior[i]+=jurus_warrior[i][j];
            j++;
        }
        j++;
        while(jurus_warrior[i][j]!='\0'){
            kata2+=jurus_warrior[i][j];
            leng2++;
            j++;
        }
        power_warrior[i]-=kata2/leng2;
        if(power_warrior[i]<0){
            power_warrior[i]=-power_warrior[i];
        }
        // printf("%s %d\n", nama_warrior[i], power_warrior[i]);
    }
}
//2222222222222222222222222222222222222222222222222222222222222

void elemen(int n, char elemen_warrior[n][50], char elemen_bos[50], int power_warrior[n]){
        for(j=0;j<n; j++){
            if(strcmp(elemen_warrior[j], "Water")==0 && strcmp(elemen_bos, "Fire")==0){            
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Fire")==0 && strcmp(elemen_bos, "Wind")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Wind")==0 && strcmp(elemen_bos, "Lightning")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Lightning")==0 && strcmp(elemen_bos, "Earth")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            else if(strcmp(elemen_warrior[j], "Earth")==0 && strcmp(elemen_bos, "Water")==0){
                power_warrior[j]=power_warrior[j]+(power_warrior[j]*40/100);
            }
            //=====================================================================================
            else if(strcmp(elemen_bos, "Water")==0 && strcmp(elemen_warrior[j], "Fire")==0){            
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Fire")==0 && strcmp(elemen_warrior[j], "Wind")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Wind")==0 && strcmp(elemen_warrior[j], "Lightning")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Lightning")==0 && strcmp(elemen_warrior[j], "Earth")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
            else if(strcmp(elemen_bos, "Earth")==0 && strcmp(elemen_warrior[j], "Water")==0){
                power_warrior[j]=power_warrior[j]-(power_warrior[j]*30/100);
            }
        }
}

//3333333333333333333333333333333333333333333333333333333333333
void hasil(int n, char nama_warrior[n][50], int power_warrior[n], int *power_bos){
    printf("Kekuatan Boss: %d\n", *power_bos);
    printf("=====================\n");
    // for(i=0; i<n; i++){
    //     printf("%s %d\n", nama_warrior[i], power_warrior[i]);
    // }
    int ada=0;
    printf("Superior\n");
    printf("=====================\n");
    printf("---------------------\n");
    for(i=0; i<n; i++){
        if(power_warrior[i]>*power_bos){
            printf("%s %d\n",  nama_warrior[i], power_warrior[i]);
            ada=1;
        }
    }
    if(ada==0){
        printf("Tidak ada karakter Superior\n");
    }
    printf("---------------------\n");
    printf("=====================\n");
    ada=0;
    printf("Inferior\n");
    printf("=====================\n");
    printf("---------------------\n");
    for(i=0; i<n; i++){
        if(power_warrior[i]<*power_bos){
            printf("%s %d\n",  nama_warrior[i], power_warrior[i]);
            ada=1;
        }
    }
    if(ada==0){
        printf("Tidak ada karakter Inferior\n");
    }
    printf("---------------------\n");
}
//3333333333333333333333333333333333333333333333333333333333333


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

/*
Bogo Wind umbral_dash
5
Hiren Wind ultra_slap
ahri Fire world_ender
malput Earth dash_punch
Jakard Water water_ball
Vira Fire double_slap
*/

/*
Virshu Lightning zipzap_shot
4 
Rendel Earth throwing_shard
Anu Lightning kick_kick
Jhon Fire tick_tock
Rai Earth pusing_saya
*/