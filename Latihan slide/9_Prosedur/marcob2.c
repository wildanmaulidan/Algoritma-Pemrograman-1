#include <stdio.h>

typedef struct{
    int x[20];          //nilai
    int y;          
    int depan;      //rata-rata separuh depan
    int belakang;   //rata-rata separuh belakang
}bungkusan;

void rataan(bungkusan z[]){
    int i, j;
    for(i = 0; i<3; i++){
        z[i].depan = 0;
        z[i].belakang = 0;
        for(j = 0; j < z[i].y/2; j++){
            z[i].depan += z[i].x[j]; //total yang di depan
        }
        for(j = z[i].y/2; j < z[i].y; j++){
            z[i].belakang += z[i].x[j]; //total yang dibelakang
        }
        z[i].depan /= (z[i].y/2); //rata-ratanya
        z[i].belakang /= (z[i].y/2); //rata-ratanya
    }
}
void sort(bungkusan  a[]){
	int i, j, temp;
	for(i=0; i<3; i++){
		for(j=0; j<3-i-1; j++){
			if(a[j].depan>a[j+1].depan){
				temp=a[j].depan;
				a[j].depan=a[j+1].depan;
				a[j+1].depan=temp;
			}
		}
	}
}

int main(){
    bungkusan array[3];
    int i, j;
    for(i = 0; i<3; i++){
        array[i].y = 0;
        j = 0;
        scanf("%d", &array[i].x[j]);
        while(array[i].x[j] != 0){
            array[i].y++;
            j++;
            scanf("%d", &array[i].x[j]);
        }
        /*for(j = 0; j < 6; j++){
            scanf("%d", &array[i].x[j]);
        }*/
    }

    for(i = 0; i<3; i++){
       for(j=0; j< array[i].y; j++){
           printf("%d-", array[i].x[j]);
       }
       printf("/%d/\n", array[i].y);
    }

    rataan(array);
	sort(array);
    //menampilkan hasil rata-rata
    for(i = 0; i<3; i++){
        printf("%d-%d\n", array[i].depan, array[i].belakang);
    }
    
    return 0;
}

//mengurutkan 
//insertion sort
//selection sort
//quick sort
//bubble sort


