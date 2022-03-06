#include<stdio.h>
#include<math.h>

typedef struct 
{
    int sisi1;
    int sisi2;
    int sisi3;
}segi3;

int main(){
    int n;
    printf("Masukan Banyak segitiga = \n");
    scanf("%d", &n);
    segi3 segitiga[n];

    int i;
    for(i=0; i<n; i++){
        printf("==========Data Segitiga ke-%d==========\n", i+1);
        printf("sisi 1 = ");
        scanf("%d", &segitiga[i].sisi1);
        printf("sisi 2 = ");
        scanf("%d", &segitiga[i].sisi2);
        printf("sisi 3 = ");
        scanf("%d", &segitiga[i].sisi3);
    }

    int max=0;
    for(i=0; i<n; i++){
        if(segitiga[i].sisi1==sqrt(segitiga[i].sisi2*segitiga[i].sisi2 + segitiga[i].sisi3*segitiga[i].sisi3)){
            printf("Segitiga pada ke-%d adalah siku-siku\n", i+1);
            max++;
        }
        else if(segitiga[i].sisi2==sqrt(pow(segitiga[i].sisi1,2)+pow(segitiga[i].sisi3,2))){
            printf("Segitiga pada ke-%d adalah siku-siku\n", i+1);
            max++;
        }
        else if(segitiga[i].sisi3==sqrt(pow(segitiga[i].sisi1,2)+pow(segitiga[i].sisi2,2))){
            printf("Segitiga pada ke-%d adalah siku-siku\n", i+1);
            max++;
        }
        else{
            printf("Segitiga pada ke-%d [BUKAN] siku-siku\n", i+1);
        }

        if(max==3){
            i=n;
        }
    }

    return 0;
}