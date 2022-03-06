#include <stdio.h>

int main(){
	int angka1, angka2, angka3, angka4,angka5, angka6;
	scanf("%d %d %d %d %d %d", &angka1, &angka2, &angka3, &angka4, &angka5, &angka6);
	int ribuan=0;
	
	if(angka1>=1000){
		ribuan+=1;
	}
	if(angka2>=1000){
		ribuan+=1;
	}
	if(angka3>=1000){
		ribuan+=1;
	}
	if(angka4>=1000){
		ribuan+=1;
	}
	if(angka5>=1000){
		ribuan+=1;
	}	
	if(angka6>=1000){
		ribuan+=1;
	}
	if(ribuan>=3){
		printf("ribuan 3 atau lebih\n");
	}
	else{
		printf("tidak valid\n");
	}
	
	
	
	return 0;
}
