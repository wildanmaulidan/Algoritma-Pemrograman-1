#include<stdio.h>
#include<string.h>

int main(){
    char puzz1[100];
    char puzz2[100];
    char gabung[200];
    int putar1, putar2;
    int i, j;

    scanf("%s", puzz1);
    scanf("%d", &putar1);
    scanf("%s", puzz2);
    scanf("%d", &putar2);

    int len1=strlen(puzz1);
    for(i=0; i<putar1; i++){
        puzz1[len1+i]=puzz1[i];
    }
    puzz1[len1+i+1]='\0';
    for(i=0; i<len1; i++){
        puzz1[i]=puzz1[i+putar1];
    }
    puzz1[i]='\0';
//===========================================
    int len2=strlen(puzz2);
    j=putar2-1;
    for(i=0; i<len2; i++){
        if(i<putar2){
        puzz2[len2+i]=puzz2[len2-1-j];
        j--;
        }
        else{
            puzz2[len2+i]=puzz2[i-putar2];
        }
    }
    puzz2[len2+i]='\0';
    for(i=0; i<len2; i++){
        puzz2[i]=puzz2[i+len2];
    }
    puzz2[i]='\0';
//===========================================

    for(i=0; i<len1; i++){
        printf("%c%c", puzz1[i], puzz2[i]);
    }
    printf("\n");

    return 0;
}