#include<stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        for(j=n*2-i; j>i+2; j--){
            printf(" ");
        }
        for(j=0; j<=i*2; j++){
            printf("*");
        }
        for(j=0; j<n+1; j++){
            printf("*");
        }
    printf("\n");
    }

    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            printf("*");
        }
        for(j=0; j<i*2+2; j++){
            printf(" ");
        }
        for(j=n*2-1; j>i*2+2; j--){
            printf("*");
        }
        for(j=n+1; j>0; j--){
            printf("*");
        }
    printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        for(j=n*2-i; j>i+2; j--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
    
    return 0;
}