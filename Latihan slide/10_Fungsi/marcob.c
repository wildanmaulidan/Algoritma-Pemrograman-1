#include<stdio.h>
#include <string.h>

int i, j;

int vokal(char string[30]){
    int vokal=0;
    i=0;
    while(string[i]!='\0'){
        if(string[i]=='o' || string[i]=='e' || string[i]=='u' || string[i]=='i' || string[i]=='a'){
            vokal++;
        }
        i++;
    }
    return vokal;
}


int main(){
    char string[30];
    scanf("%s", string);
    printf("vokal = %d\n", vokal(string));

    int loop=vokal(string);
    for(i=0; i<loop; i++){
        printf("%c ", string[i]);
    }

    return 0;
}
