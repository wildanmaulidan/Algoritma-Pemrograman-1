#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char str[100];
    scanf("%s", str);

    int i, j, k=0;
    int tinggi=sqrt(strlen(str));

    for(i=0; i<=tinggi; i++){
        for(j=tinggi; j>i; j--){
            printf(" ");
        }
        for(j=0; j<i*2+1; j++){
            printf("%c", str[k]);
            k++;
            if(str[k]=='\0'){
                j=i*2+1;
                i=tinggi;
            }
        }
        printf("\n");
    }







    return 0;
}