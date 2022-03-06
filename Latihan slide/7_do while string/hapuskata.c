#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char word[20];
    int i, j, k, n;

    printf("Masukan string :");
    scanf("%s", str);
    printf("Masukan Kata yang ingin dihilangkan :");
    scanf("%s", word);

    i=0;                                                
    j=0;                                                
    n=0;                                                
    do{                                                 
        if(str[i]==word[j]){                
            j++;                                       
        }                                               
        else if(str[i]==word[0]){          
            j=1;                                        
        }
        else{                                          
            j=0;                                        
        }
        if(word[j]=='\0'){                      
            i=i+1-j;                                   
            for(k=i; str[k]!='\0'; k++){           
                str[k]=str[k+j];
            }
            k=i;                                       
            // while(str[k]!='\0'){                   
            //     str[k]=str[k+j];              
            //     k++;                                    
            // }N
            j=0;                                       
            i--;                                        
        }
        i++;                                           
    }while(str[i]!='\0');                       

    printf("Hasil : %s", str);

    return 0;
}