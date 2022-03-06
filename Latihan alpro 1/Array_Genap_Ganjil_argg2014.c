#include<stdio.h>
#include<string.h>

int main(){
    int n, m, i, j;

    scanf("%d", &n);
    int arr1[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int arr2[m];
    for(i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    int shrt;
    if(n>m){
        shrt=n;
    }
    else if(m>n){
        shrt=m;
    }
    else{
        shrt=n;
    }

    int valid=1;
    for(i=0; i<shrt; i++){
        if((arr1[i]%2!=0 && arr2[i]%2==0) || (arr1[i]%2==0 && arr2[i]%2!=0)){
            valid=0;
        }
    }


    if(valid==1){
        printf("valid\n");
    }
    else{
        printf("tidak valid\n");
    }

    return 0;
}