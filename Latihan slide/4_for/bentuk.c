#include<stdio.h>

int main(){
    int i, j;
    int n=5;

    for(i=0; i<n; i++){
        for(j=n-i; j>1; j--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("*");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        for(j=n-i; j>1; j--){
            printf(" ");
        }
        for(j=0; j<6; j++){
            printf("*");
        }
        for(j=n-i; j>1; j--){
            printf("*");
        }
        printf("\n");
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<=i; j++){
            printf(" ");
        }
        for(j=n-i-1; j>=1; j--){
            printf("*");
        }
        for(j=n-i-1; j>1; j--){
            printf("*");
        }
        for(j=0; j<=i; j++){
            printf(" ");
        }
        for(j=0; j<6; j++){
            printf("*");
        }
        for(j=0; j<=i; j++){
            printf("*");
        }

        printf("\n");
    }



    return 0;
}