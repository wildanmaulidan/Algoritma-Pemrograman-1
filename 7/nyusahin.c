/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP7 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>
#include<string.h>

int main(){
    char input[30];
    char neww[100];
    char hasil[30];
    int panjangdepan=0, i, j=0, k=0, n=0, flag=0;
    int valid=0;
//=====================MINTA INPUT====================
    scanf("%s", input);
    int panjanginput=strlen(input);
//====================TENTUKAN VALID ATAU TIDAK
    i=0;
    while(i!=panjanginput){
        if(input[i]=='!'){
            valid=1;
        }
        i++;
    }
//=================PANJANG Depan & Belakang  
    if(valid==1){
        i=0;       
        while(input[i]!='!'){                                          
            panjangdepan++;   
            i++;              
        }
    }
        int panjangbelakang=panjanginput-panjangdepan-1;
        printf("Valid = %d\n", valid);
        printf("Panjang Input: %d\n", panjanginput);
        printf("Panjang Depan: %d\n", panjangdepan);
        printf("Panjang Belakang: %d\n", panjangbelakang);
//===============MASUKAN KE ARRAY TERPISAH
    char arrdepan[panjangdepan];
    i=0;
    while (i!=panjangdepan){
        arrdepan[i]=input[i];
        i++;
    }

    char arrbelakang[panjangbelakang];
    i=0;
    while (i!=panjangbelakang){
        arrbelakang[i]=input[panjangdepan+i+1];
        i++;
    }
    printf("Kata depan: %s\n", arrdepan);
    printf("Kata belakang: %s\n", arrbelakang);

//=============MASUKAN KE ARRAY PASSWORD
    for(i = 0 ; arrdepan[i] != '\0' ; i++)
    {
        k = i;
     
        while(arrdepan[i] == arrbelakang[j])
        {
            i++,j++;
            if(j == strlen(arrbelakang))
            {
                flag = 1;
                break;
            }
        }
    j = 0;

    if(flag == 0){
        i = k; 
        neww[n++] = arrdepan[i];
    }
             
    else{
        flag = 0;
        neww[n++] = '\0';
    }
        
    }

    neww[n] = '\0';
    strcpy(hasil, neww);
    
    // printf("\n\nAfter Removing Word From String: %s\n",neww);

//========================================
    // int katailang=0;
    // i=0;
    // while(i!=panjangbelakang){
    //     j=panjangdepan;
    //     while(j>=0){
    //         if(arrdepan[j]==arrbelakang[i]){
    //             katailang++;
    //             if(katailang==strlen(arrbelakang)){
    //                 for(int k=j; k<strlen(arrdepan); k++){
    //                     arrdepan[k]=arrdepan[k+1];
    //                 }
    //             }
    //         }
    //         else{
    //             katailang=0;
    //         }
    //         j--;
    //     }
    //     i++;
    // }
    // printf("Yang akan hilang: %d\n", katailang);
    // printf("Hasil: %s\n", arrdepan);

//============Cari Kata
    // int katailang=0;
    // i=0;
    // while(arrbelakang[i]!='\0'){
    //     j=0;
    //     do{
    //         if(arrbelakang[i]==arrdepan[j]){
    //             katailang++;
    //             if(katailang==strlen(arrbelakang)){
    //                 for(int k=j; k<strlen(arrdepan); k++){
    //                     arrdepan[k]=arrdepan[k+1];
    //                 }
    //             }
    //         }
    //         else{
    //             katailang=0;
    //         }
    //         j++;
    //     }while(arrdepan[j]!='\0');
    //     i++;
    // }

//====================================
    // int loop=1;
    // int count=0;
    // do{
    //     i=0;
    //     do{
    //         j=0;
    //         do{
    //             if(arrdepan[i]==arrbelakang[j]){
    //                 count++;
    //                 if(count==strlen(arrbelakang)){
    //                     for(int k=i-strlen(arrbelakang); k<strlen(arrdepan); k++){
    //                         arrdepan[k]=arrdepan[k+1+strlen(arrbelakang)];
    //                     }
    //                 }
    //             }
    //             else{
    //                 count=0;
    //             }
    //             j++;
    //         }while(arrbelakang[j]=='\0');

    //         i++;
    //     }while(arrdepan[i]=='\0');
    // }while(loop==1);

//====================================

//====================================
    // int dimensi1=strlen(arrdepan);
    // int dimensi2=strlen(arrbelakang);
    // char temp[dimensi1][dimensi2];
    // i=0;
    // do{
    //     j=0;
    //     do{
    //         temp[i][j]=arrdepan[i+j];
    //         j++;
    //     }while(arrbelakang[j]=='\0');
    //     i++;
    // }while(arrdepan[i]=='\0');

    // i=0;
    // do{
    //     printf("%s\n", temp[i]);
    //     i++;
    // }while(i!=strlen(arrdepan));

//====================================

    // printf("Yang akan hilang: %d\n", katailang);
    // printf("Hasil: %s\n", neww);


    if(valid==1){
        printf("Tanpa kunci: %s\n\n", neww);

        printf("Enkripsi 1:\n"); 
        strcpy(arrdepan, " ");
        i=strlen(neww);
        j=0;
        do{
            if(i<3){
                printf("%c\n", neww[i-1]);
            }
            else{
                printf("%c ", neww[i-1]);
            }
            hasil[j]=neww[i-1];
            j++;
            i-=2;
        }while(i>0);  
        i=strlen(neww)-1;
        do{
            if(i<3){
                printf(" %c\n\n", neww[i-1]);
            }
            else{
                printf(" %c", neww[i-1]);
            }
            hasil[j]=neww[i-1];
            j++;
            i-=2;
        }while(i>0);

        printf("Enkripsi 2: %s\n", hasil);
    }
    else{
        printf("==== Inputan Tidak Valid! ====\n");
    }

    return 0;
}