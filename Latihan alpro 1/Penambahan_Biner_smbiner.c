#include<stdio.h>
#include<string.h>
#include<math.h>

void binerkonv(int n);
int sum=0;

int main(){
    int n, i, j;
    scanf("%d", &n);
    int biner[n];
    for(i=0; i<n; i++){
        scanf("%d", &biner[i]);
    }

    for(i=0; i<n; i++){
        binerkonv(biner[i]);
    }

    printf("%d\n",sum);

    return 0;
}

void binerkonv(int n){
    int desimal=0, i=0, sisa;
    while(n!=0){
        sisa=n%10;
        n/=10;
        desimal+=sisa*pow(2,i);
        ++i;
    }
    sum+=desimal;
}