#include<stdio.h>
#include<math.h>

int main(){
    int sisi1, sisi2, sisi3;
    
    scanf(" %d", &sisi1);
    scanf(" %d", &sisi2);
    scanf(" %d", &sisi3);

    if(sisi1==sisi2 && sisi2==sisi3){
         printf("ini segitiga sama sisi\n");
    }
    else if(sisi1==sisi2&&sisi1!=sisi3&&sisi2!=sisi3 || sisi1==sisi3&&sisi1!=sisi2&&sisi3!=sisi2 || sisi2==sisi3&&sisi2!=sisi1&&sisi3!=sisi1){
        printf("ini segitiga sama kaki\n");
    }
    
    else if(sisi1==sqrt(sisi2*sisi2+sisi3*sisi3) || sisi2==sqrt(sisi1*sisi1+sisi3*sisi3) || sisi3==sqrt(sisi2*sisi2+sisi1*sisi1)){
        printf("ini segitiga siku-siku\n");
    }
    else{
        printf("Hanya menerima masukan segitiga sama sisi, sama kaki, dan siku-siku\n");
    }

    return 0;
}