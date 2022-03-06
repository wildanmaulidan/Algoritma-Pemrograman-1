#include<stdio.h>

int i, j;

int max(int n, int array[n]){
    int max=array[0];
    for(i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int min(int n, int array[n]){
    int min=array[0];
    for(i=0; i<n; i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}

void  cetak(int n){
    for(i=0; i<n; i++){
        printf("halo ke-%d\n", i+1);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    int arr[x];
    for(i=0; i<x; i++){
        scanf("%d", &arr[i]);
    }

    cetak(max(x, arr)*min(x, arr));

    return 0;
}
