#include<stdio.h>
#include<string.h>

int main(){
    int n, i;
    scanf("%d", &n);
    double arr[n];
    for(i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }

    int depan[n];
    int belakang[n];
    int val=0;
    for(i=0; i<n; i++){
        depan[i]=arr[i];
        belakang[i]=(arr[i]-depan[i])*100+0.5;
        if(depan[i]%2==0 && belakang[i]%2==1){
            val++;
        }
    }

    if(val>=3){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }


    return 0;
}