#include<stdio.h>
#include<string.h>

int main(){
    int n, m, i, j;
    int sum1=0, sum2=0;

    scanf("%d", &n);
    int arr1[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
        if(i<n/2){
            sum1+=arr1[i];
        }
    }

    scanf("%d", &m);
    int arr2[m];
    for(i=0; i<m; i++){
        scanf("%d", &arr2[i]);
        if(i>=m/2){
            sum2+=arr2[i];
        }
    }

    if(sum1==sum2){
        printf("valid\n");
    }
    else{
        printf("tidak valid\n");
    }

    return 0;
}