#include<stdio.h>

typedef struct 
{
    float utuh;
    int depan;
    int belakang;
}data_bilangan;

int main(){
    int n;
    printf("Masukan banyaknya bilangan = ");
    scanf("%d", &n);

    data_bilangan bil[n];
    int i;
    for(i=0; i<n; i++){
        printf("Bilangan ke-%d =",i+1);
        scanf("%f", &bil[i].utuh);
        bil[i].depan=bil[i].utuh;
        printf("depan koma = %d\n", bil[i].depan);
        bil[i].utuh*=100;
        bil[i].belakang = (bil[i].utuh-bil[i].depan)*100;
        printf("belakang koma = %d\n", bil[i].belakang);
        printf("==========================================\n");
    }

    for(i=0; i<n; i++){
        if(bil[i].depan%2==0 && bil[i].belakang%2==0){
            printf("ini dia boy ---> index ke-%d = %lf\n", i, bil[i].utuh);
        }
    }

    return 0;
}


// #include<stdio.h>

// typedef struct 
// {
//     double utuh;
//     int depan;
//     double belakang;
// }data_bilangan;

// int main(){
//     int n;
//     printf("Masukan banyaknya bilangan = ");
//     scanf("%d", &n);

//     data_bilangan bil[n];
//     int i;
//     for(i=0; i<n; i++){
//         printf("Bilangan ke-%d =",i+1);
//         scanf("%lf", &bil[i].utuh);
//         bil[i].depan=bil[i].utuh;
//         printf("depan koma = %d\n", bil[i].depan);
//         bil[i].belakang=(bil[i].utuh-bil[i].depan);
//         printf("belakang koma (double) = %lf\n", bil[i].belakang*100);
//         bil[i].belakang*=100;
//         printf("belakang koma (integer) = %d\n", (int)bil[i].belakang);
//         printf("==========================================\n");
//     }

//     for(i=0; i<n; i++){
//         if(bil[i].depan%2==0 && (int)bil[i].belakang%2==0){
//             printf("ini dia boy ---> index ke-%d = %lf\n", i, bil[i].utuh);
//         }
//     }



//     return 0;
// }