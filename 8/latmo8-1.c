// latmo8-1

#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    char satu[n][101], dua[n][101];
    int i, j, k, a;
    for(i=0; i<n; i++){
        scanf("%s", &satu[i]);
    }
    
    for(i=0; i<n; i++){
        scanf("%s", &dua[i]);
    }

    a=-1;
    for(i=0; i<n; i++){

        printf("%s\n", satu[i]);
        a+=strlen(satu[i]);

        for(j=0; j<strlen(dua[i]); j++){
            for(k=0; k<a; k++){
                printf(" ");
            }
            printf("%c", dua[i][j]);
            if(j<strlen(dua[i])-1){
                printf("\n");
            }
        }

    }
    printf("\n");

return 0; 
}