// latmo8-2

#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    char str[n][101];
    int i, j, ascii=0;
    for(i=0; i<n; i++){
        scanf("%s", &str[i]);
        for(j=0; j<strlen(str[i]); j++){
            ascii+=str[i][j];
        }
    }

    if(ascii%2 == 0){
        for(i=0; i<n; i++){
            for(j=strlen(str[i])-1; j>=0; j--){
                printf("%c", str[i][j]);
            }
            if(i<n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    else{
        for(i=n-1; i>=0; i--){
            printf("%s", str[i]);
            if(i>0){
                printf(" ");
            }
        }
        printf("\n");
    }
 

return 0; 
}