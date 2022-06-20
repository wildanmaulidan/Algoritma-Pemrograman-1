#include<stdio.h>
#include<string.h>

int i, j, k, plus;

typedef struct 
{
    char kalimat[200];
    char word1[100];
    char word2[100];
}data;

void delete_(int n, data bahan[n]){
    int len;
    for(i=0; i<n; i++){
        j=0;
        len=strlen(bahan[i].kalimat);
        while(bahan[i].kalimat[j]!='\0'){
            if(bahan[i].kalimat[j] == '_')
            {
                for(k = j; k < len; k++)
                {
                    bahan[i].kalimat[k] = bahan[i].kalimat[k+1];
                }
                len--;
                j--;	
            }
            j++; 
        }
	}	
}

void lowercase(int n, data bahan[n]){
    for(i=0; i<n; i++){
        j=0;
        while(bahan[i].kalimat[j]!='\0'){
            if(bahan[i].kalimat[j] >= 'A' && bahan[i].kalimat[j] <= 'Z') {
                bahan[i].kalimat[j] = bahan[i].kalimat[j] + 32;
            }
            j++;
        }
    }
}

void bagi(int n, data bahan[n]){
    for(i=0; i<n; i++){
        j=0;
        while(bahan[i].kalimat[j]!='?'){
            bahan[i].word1[j]=bahan[i].kalimat[j];
            j++;
        }
        bahan[i].word1[j]='\0';

        j++;
        k=0;
        while(bahan[i].kalimat[j]!='\0'){
            bahan[i].word2[k]=bahan[i].kalimat[j];
            j++;
            k++;
        }
        bahan[i].word2[k]='\0';
    }
}

void sorting(int n, data bahan[n]){
    char temp;  
    for(i=0; i<n; i++){
        for(j=0; j<strlen(bahan[i].word1)-1; j++){
            for(k=j+1; k<strlen(bahan[i].word1); k++){
                if(bahan[i].word1[j]>bahan[i].word1[k]){
                    temp=bahan[i].word1[j];
                    bahan[i].word1[j]=bahan[i].word1[k];
                    bahan[i].word1[k]=temp;
                }
                if(bahan[i].word2[j]>bahan[i].word2[k]){
                    temp=bahan[i].word2[j];
                    bahan[i].word2[j]=bahan[i].word2[k];
                    bahan[i].word2[k]=temp;
                }
            }
        }
        // printf("%s\n%s\n\n", bahan[i].word1, bahan[i].word2);
    }
}

void anagram(int n, data bahan[n]){
    for(i=0; i<n; i++){
        if(strcmp(bahan[i].word1, bahan[i].word2)==0){
            printf("Anagram!\n");
            plus++;
        }
        else{
            printf("Bukan Anagram!\n");
        }
    }
}

int detik(char bahan[10]){
    int produk;
    int kali=1;
    int jam=0, menit=0, detik=0;
    i=strlen(bahan)-1;
    while(bahan[i]!=':'){
        detik+=(bahan[i]-48)*kali;
        kali*=10;
        i--;
    }
    i--;
    kali=1;
    while(bahan[i]!=':'){
        menit+=(bahan[i]-48)*kali;
        kali*=10;
        i--;
    }
    i--;
    kali=1;
    while(i==0){
        jam+=(bahan[i]-48)*kali;
        kali*=10;
        i--;
    }
    // printf("jam=%d  menit=%d  detik=%d\n", jam, menit, detik);
    produk=jam*3600;
    produk+=menit*60;
    produk+=detik;

    return produk;
}

void polindrom_cek(int penambah, int waktu){
    int bilangan=penambah+waktu;
    int balik=0, tanda, banding=bilangan;
    while(bilangan!=0){
        tanda=bilangan%10;
        balik=balik*10+tanda;
        bilangan/=10;
    }
    if(banding==balik){
        printf("\nLanjut Nonton\n");
    }
    else{
        printf("\nTidur\n");
    }
}


int main(){
    int n;
    scanf("%d", &n);
    data input[n];
    for(i=0; i<n; i++){
        scanf("%s", input[i].kalimat);
    }
    char durasi[10];
    scanf("%s", durasi);

    delete_(n, input);
    lowercase(n, input);
    bagi(n, input);
    sorting(n, input);
    anagram(n, input);
    polindrom_cek(plus, detik(durasi));

    // for(i=0; i<n; i++){
    //     printf("%s\n", input[i].kalimat);
    // }
    // printf("%s", durasi);


    return 0;
}