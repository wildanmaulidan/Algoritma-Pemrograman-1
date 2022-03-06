#include<stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);

    for(i=0; i<n*2; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        for(j=n*4-i; j>i+2; j--){
            printf(" ");
        }
        for(j=0; j<=i*2; j++){
            printf("*");
        }
        for(j=n*4-i; j>i+2; j--){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=0; j<n*2+1; j++){
            printf(" ");
        }
        for(j=0; j<(n*8-1)-(2*(n*2+1)); j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=0; j<(n*8-1)-(n*2+1)-n; j++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=n; j>i; j--){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}