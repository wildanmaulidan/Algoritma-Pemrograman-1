#include<stdio.h>
#include<string.h>

int main()
{
    int i, j = 0, k = 0,n = 0;
 
    char input[100];
    char str[100], word[100];

    scanf("%s", input);

    i=0;
    j=0;
    do{
        str[i]=input[j];
        i++;
        j++;
    }while(input[j]!='!');
    str[j]='\0';
    scanf("%s", str);
    // scanf("%s", word);

    // i=0;
    // j=0;
    // n=0;
    // do{
    //     if(str[i]==word[j]){
    //         j++;
    //     }
    //     else if(str[i]==word[0]){
    //         j=1;
    //     }
    //     else{
    //         j=0;
    //     }
    //     if(word[j]=='\0'){
    //         i=i+1-j;
    //         for(k=i; str[k]!='\0'; k++){
    //             str[k]=str[k+j];
    //         }
    //         j=0;
    //     }
    //     i++;
    // }while(str[i]!='\0');
    // printf("hasil= %s", str);
    return 0;
}