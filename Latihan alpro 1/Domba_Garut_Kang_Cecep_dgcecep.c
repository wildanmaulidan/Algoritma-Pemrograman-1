#include<stdio.h>

int main(){
    int n, m, p, r, i;
    scanf("%d %d %d %d", &n, &m, &p, &r);

    for(i=0; i<r; i++){
        n*=m;
        if(i>=2){
            n-=p;
        }
        // printf("tahun ke-%d = %d domba\n", i+1, n);
    }

    printf("%d\n", n);


    return 0;
}