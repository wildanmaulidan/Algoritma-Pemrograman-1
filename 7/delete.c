#include<stdio.h>
#include<string.h>

int main()
{
    int i=0, j=0, k=0;
    int loop;
    int valid=0;

    char input[100];
    // printf("Masukan Kata: ");
    scanf("%s", input);
    // printf("============================DATA INPUT===========================\n");
    // printf("panjang array input(termasuk tutup)= %d\n", strlen(input));
    // printf("Isi array tiap index:\n");
    // for(i=0; i<=strlen(input); i++){
    //     printf("Index ke-%d = %c\n", i, input[i]);
    // }
//=================================================================================
    i=0;
    do{
        if(input[i]=='!'){
            valid=1;
            i==strlen(input);
        }
        i++;
    }while( i!=strlen(input));
    // printf("Nilai Valid ! = %d\n", valid);
//=====================================================================================
    if(valid==1){
    //=================================================================================
        char depan[strlen(input)];
        i=0;
        while(input[i]!='!'){
            depan[i]=input[i];
            i++;
        }
        depan[i]='\0';
        // printf("============================Depan===========================\n");
        // printf("panjang array depan(termasuk tutup)= %d\n", strlen(depan));
        // printf("Isi array tiap index:\n");
        // for(i=0; i<=strlen(depan); i++){
            // printf("Index ke-%d = %c\n", i, depan[i]);
        // }
        // printf("ISI ARRAY DEPAN = %s\n", depan);

    //=================================================================================
        char belakang[strlen(input)];
        i=strlen(depan)+1;
        j=0;
        while(j!=strlen(input)-strlen(depan)){
            belakang[j]=input[i];
            i++;
            j++;
        }
        belakang[i]='\0';
        // printf("===========================Belakang===========================\n");
        // printf("panjang array belakang(termasuk tutup)= %d\n", strlen(belakang));
        // printf("Isi array tiap index:\n");
        // for(i=0; i<=strlen(belakang); i++){
        //     printf("Index ke-%d = %c\n", i, belakang[i]);
        // }
        // printf("ISI ARRAY BELAKANG = %s", belakang);

        //===================================ROMOVE WORD=================================
        int loop=1;
        int n = 0;
        int flag = 0;
        i=0;
        int reset=0;
            do{
                k = i;
                while(depan[i] == belakang[j] &&loop==1)
                {
                    i++,j++;
                    if(j == strlen(belakang))
                    {
                        flag = 1;
                        loop=0;
                    }
                }
                j = 0;
                loop=1;
                if(flag == 0){
                    i = k;    
                    depan[n] = depan[i];
                }  
                else{
                    flag = 0;
                    depan[n] = depan[i];
                    reset=1;
                }
                n++;
                i++;
            }while(depan[i] != '\0');
            depan[n] = '\0';
            

            printf("After Removing Word From String: %s\n",depan);
    }
//**************************************************************************************************
    else{
        printf("==== Inputan Tidak Valid! ====\n");
    }









    return 0;
}