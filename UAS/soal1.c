#include<stdio.h>
#include<string.h>

int i, j, k;

int hitung(int n, char str[n][100], char word[50]){
    int count=0;
    for(i=0; i<n; i++){
        j=0;
        k=0;
        do{
            if(str[i][j]==word[k]){
                k++;
            }
            else if(str[i][j]==word[0]){
                k=1;
            }
            else{
                k=0;
            }
            if(word[k]=='\0'){
                count++;
            }
            j++;
        }while(str[i][j]!='\0');
    }
}


int main(){
    int n;
    scanf("%d", &n);
    char str[n][100];
    for(i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    char word[50];
    scanf("%s", word);
    printf("%d\n", hitung(n, str, word));

    return 0;
}