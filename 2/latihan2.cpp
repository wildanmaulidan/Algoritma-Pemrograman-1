#include<stdio.h>

int main(){
	int kotak1, kotak2, kotak3, tot;
	printf("KOTAK A : ");
	scanf("%d", &kotak1);
	printf("KOTAK B : ");
	scanf("%d", &kotak2);
	printf("KOTAK C : ");
	scanf("%d", &kotak3);
	
	if((kotak1>kotak2)&&(kotak1>kotak3)){
		printf("KOTAK A paling banyak\n");
	}
	else if((kotak1<kotak2)&&(kotak3<kotak2)){
		printf("KOTAK B paling banyak\n");
	}
	else{
		printf("KOTAK C paling banyak\n");
	}
	tot=kotak1+kotak2+kotak3;
	if(tot%2==0){
		printf("Jumlahnya genap");
	}
	else{
		printf("Jumlahnya ganjil");
		
	}

	return 0;
}
