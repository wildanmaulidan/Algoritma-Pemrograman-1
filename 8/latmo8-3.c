// latmo8-3

#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    char str[n][101];
    int i, j, k, a;
    for(i=0; i<n; i++){
        scanf("%s", &str[i]);
    }

    for(i=0; i<n; i+=2){
        if(i!=0){
            for(j=0; j<strlen(str[i-1]); j++){
                printf(" ");
            }
        }
        printf("%s", str[i]);
    }
    printf("\n");

    for(i=1; i<n; i+=2){
        for(j=0; j<strlen(str[i-1]); j++){
            printf(" ");
        }
        printf("%s", str[i]);
    }
    printf("\n");

    for(i=0; i<n; i+=2){
        if(i!=0){
            for(j=0; j<strlen(str[i-1]); j++){
                printf(" ");
            }
        }
        for(j=strlen(str[i])-1; j>=0; j--){
            printf("%c", str[i][j]);
        }
    }
    printf("\n");
    
    for(i=1; i<n; i+=2){
        for(j=0; j<strlen(str[i-1]); j++){
            printf(" ");
        }
        for(j=strlen(str[i])-1; j>=0; j--){
            printf("%c", str[i][j]);
        }
    }
    printf("\n");
 

return 0; 
}