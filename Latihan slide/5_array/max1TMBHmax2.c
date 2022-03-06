#include<stdio.h>

int main(){
    int n;
    int i, j, temp;

    scanf("%d", &n);
    int bil[n];
    for(i=0; i<n; i++){
        scanf("%d", &bil[i]);
    }

    for(i = 0; i < n; i++){
      for(j=0; j < n-i-1; j ++){
        if(bil[j] > bil[j+1]){
          temp = bil[j];
          bil[j] = bil[j+1];
          bil[j+1] = temp;
        }
      }
    }

    printf("Hasil penambahan = %d\n", bil[n-1]+bil[n-2]);

    return 0;
}