#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Masukan Banyak kata : ");
    scanf("%d", &n);

    char str[n][50];

    printf("===============INPUT KATA===============\n");
    int i, j, k;
    for(i=0; i<n; i++){
        scanf("%s", str[i]);
    }

    int spasi=0;
    for(i=0; i<n; i++){
        if(i==0 || i%2==0){
            if(strlen(str[i])%2!=0){
                for(k=0; k<spasi; k++){
                    printf(" ");
                }
                for(j=0; j<strlen(str[i])/2+1; j++){
                    printf("%c", str[i][j]);
                    spasi++;
                }
            }
            else{
                for(k=0; k<spasi; k++){
                    printf(" ");
                }
                for(j=0; j<strlen(str[i])/2; j++){
                    printf("%c", str[i][j]);
                    spasi++;
                }
            }
            printf(" ");
            for(j=strlen(str[i])/2; j<strlen(str[i]); j++){
                printf("%c", str[i][j]);
            }
            printf("\n");
        }
        else{
            for(j=strlen(str[i])-1; j>=0; j--){
                for(k=0; k<spasi; k++){
                    printf(" ");
                }
                printf("%c\n", str[i][j]);
            }
        }
    }




    return 0;
}