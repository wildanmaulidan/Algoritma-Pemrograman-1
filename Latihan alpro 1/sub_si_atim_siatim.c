#include<stdio.h>
#include<string.h>

int main(){
    char word[5];
    char str[50];
    scanf("%s", word);
    scanf("%s", str);

    int i, j, k, ketemu=0;
    for(i=0; i<strlen(str); i++){
        if(str[i]==word[0]){
            j=1;
        }
        else if(str[i]==word[j]){
            j++;
            if(j==strlen(word)-1){
                ketemu++;
            }
        }
        else{
            j=0;
        }
    }


    printf("%d\n", ketemu);
    return 0;
}