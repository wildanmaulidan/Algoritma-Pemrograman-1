/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP7 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>
#include<string.h>

int main(){
    char input[30];

    char hasil[30];
    int i, j=0, k=0, n=0, flag=0;
    int valid=0;
    int panjangdepan=0;
    int panjangbelakang=0;
//=====================MINTA INPUT====================
    scanf("%s", input);
//====================TENTUKAN VALID ATAU TIDAK
    i=0;
    while(i!=strlen(input)-1){
        if(input[i]=='!'){
            valid=1;
        }
        i++;
    }
    i=strlen(input);
    do{
        if(input[i]=='!'){
            valid=1;
            if(valid==1){
                i=0;
                do{
                    panjangdepan++;
                    i++;
                }while(input[i]!='!');
            }
        }
        i--;
    }while(i!=0);
    panjangbelakang=strlen(input)-panjangdepan-1;

    // for(i=0; i<=strlen(input); i++){
    //     printf("index %d =%c\n", i, input[i]);
    // }
//=====================================================================================
    char str[panjangdepan], neww[panjangdepan], word[panjangbelakang];

    i=0;
    do{
        str[i]=input[i];
        i++;
    }while(i!=panjangdepan);
    str[i]='\0';
// printf("=====================DEPAN========================\n");
//     for(j=0; j<=panjangdepan; j++){
//         printf("index %d =%c\n", j, str[j]);
//     }

//=================================================================================
    i=panjangdepan+1;
    j=0;
    do{
        word[j]=input[i];
        i++;
        j++;
    }while(i!=strlen(input));
    word[j]='\0';
// printf("=====================BELAKANG========================\n");
//     for(j=0; j<=panjangbelakang; j++){
//         printf("index %d =%c\n", j, word[j]);
//     }
//========================================================================
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;
     
        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
    j = 0;

    if(flag == 0){
        i = k; 
    }
            
    else{
        flag = 0;
    }

    neww[n++] = str[i];
    }
    neww[n] = '\0';
//===============================================================
    


        
        printf("Valid = %d\n", valid);
        printf("Panjang Input: %d\n", strlen(input));
        printf("Panjang Depan: %d\n", panjangdepan);
        printf("Panjang Belakang: %d\n", panjangbelakang);
        printf("Hasil depan: %s\n", str);
        printf("Hasil belakang: %s\n", word);
        printf("Hasil Potong: %s\n", neww);
// //===============MASUKAN KE ARRAY TERPISAH

    return 0;
}
