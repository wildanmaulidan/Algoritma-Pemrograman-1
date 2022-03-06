#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char word[20];
    int i, j, k, spasi;

    printf("Masukan string :");
    scanf("%s", str);

    printf("==========POLA 1==========\n");
    spasi=0;
    for(i=0; i<strlen(str)/2; i++){
        for(j=0; j<spasi; j++){
            printf(" ");
        }
        printf("%c\n", str[i]);
        spasi++;
    }
    k=i;
    for(i=k; i<strlen(str); i++){
        for(j=spasi; j>0; j--){
            printf(" ");
        }
        printf("%c\n", str[i]);
        spasi--;
    }

    printf("==========POLA 2==========\n");
    spasi=strlen(str)-1;
    for(i=0; i<strlen(str); i++){
        for(j=0; j<spasi; j++){
            printf(" ");
        }
        printf("%c\n", str[i]);
        spasi--;
    }

    printf("==========POLA 3==========\n");
    spasi=strlen(str)-1;
    for(i=0; i<strlen(str); i++){
        for(j=0; j<spasi; j++){
            printf(" ");
        }
        printf("%c\n", str[strlen(str)-i-1]);
        spasi--;
    }



    return 0;
}