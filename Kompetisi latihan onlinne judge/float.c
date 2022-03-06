#include<stdio.h>

int main(){
	float input1=0;
	float input2=0;
	float input3=0;
	float input4=0;
	float input5=0;
	float input6=0;
	
	scanf("%f %f %f %f %f %f", &input1, &input2,&input3,&input4,&input5,&input6);
	
	int depan1=input1;
	int depan2=input2;
	int depan3=input3;
	int depan4=input4;
	int depan5=input5;
	int depan6=input6;
	
	int belakang1=(input1-depan1)*100;
	int belakang2=(input2-depan2)*100;
	int belakang3=(input3-depan3)*100;
	int belakang4=(input4-depan4)*100;
	int belakang5=(input5-depan5)*100;
	int belakang6=(input6-depan6)*100;
	
//	printf("belakang 1: %d\n", belakang1);
//	printf("belakang 2: %d\n", belakang2);
//	printf("belakang 3: %d\n", belakang3);
//	printf("belakang 4: %d\n", belakang4);
//	printf("belakang 5: %d\n", belakang5);
//	printf("belakang 6: %d\n", belakang6);
//	
//	int a=belakang1;
//	int ribuan,ratusan,puluhan,satuan;
//	ribuan = a / 1000;
//	ratusan = (a - ribuan * 1000) / 100;
//	puluhan = (a - ribuan * 1000 - ratusan  * 100)/ 10;
//	satuan = (a - ribuan * 1000 - ratusan * 100 - puluhan * 10 );
// 
//	printf("Nilai ribuan : %d \n",ribuan);
//	printf("Nilai ratusan : %d \n",ratusan);
//	printf("Nilai puluhan : %d \n",puluhan);
//	printf("Nilai satuan : %d \n",satuan);
	
	int valid=0;
	if(belakang1/10==3 || belakang1/10==6 || belakang1/10==9){
		valid+=1;
	}
	if(belakang2/10==3 || belakang2/10==6 || belakang2/10==9){
		valid+=1;
	}
	if(belakang3/10==3 || belakang3/10==6 || belakang3/10==9){
		valid+=1;
	}
	if(belakang4/10==3 || belakang4/10==6 || belakang4/10==9){
		valid+=1;
	}
	if(belakang5/10==3 || belakang5/10==6 || belakang5/10==9){
		valid+=1;
	}
	if(belakang6/10==3 || belakang6/10==6 || belakang6/10==9){
		valid+=1;
	}
	if(valid>=3){
		printf("valid\n");
	}
	else{
		printf("tidak valid\n");
	}
//	printf("jumlah validnya = %d",valid);

//	if( (belakang1>=30&&belakang1<=39) || (belakang1>=60&&belakang1<=69) || (belakang1>=90&&belakang1<=99)){
//		valid+=1;
//	}
//	if( (belakang2>=30&&belakang2<=39) || (belakang2>=60&&belakang2<=69) || (belakang2>=90&&belakang2<=99)){
//		valid+=1;
//	}
//	if( (belakang3>=30&&belakang3<=39) || (belakang3>=60&&belakang3<=69) || (belakang3>=90&&belakang3<=99)){
//		valid+=1;
//	}
//	if( (belakang4>=30&&belakang4<=39) || (belakang4>=60&&belakang4<=69) || (belakang4>=90&&belakang4<=99)){
//		valid+=1;
//	}
//	if( (belakang5>=30&&belakang5<=39) || (belakang5>=60&&belakang5<=69) || (belakang5>=90&&belakang5<=99)){
//		valid+=1;
//	}
//	if( (belakang6>=30&&belakang6<=39) || (belakang6>=60&&belakang6<=69) || (belakang6>=90&&belakang6<=99)){
//		valid+=1;
//	}
//	


	return 0;
}
