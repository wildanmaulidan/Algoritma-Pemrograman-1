#include<stdio.h>

int main(){
    int n, m, k, h, r, i, laba=0;
    scanf("%d %d %d %d %d", &n, &m, &k, &h, &r);
    for(i=0; i<r; i++){
        laba+=n*100;
        laba+=m*150;
        laba+=k*75;
        laba+=h*175;
    }
    printf("%d\n", laba);
}