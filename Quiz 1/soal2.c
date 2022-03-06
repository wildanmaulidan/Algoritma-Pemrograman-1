/*Saya Muhammad Rizki NIM [2107922] mengerjakan soal Kuis 1 Alpro 1 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>	//Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan
#include <math.h>

int main(){	//fungsi utama program
/*=========================AWAL DEKLARASI VARIABEL=========================*/
	float a, b, c, d;
	int tukar1, tukar2;
/*=========================AKHIR DEKLARASI VARIABEL=========================*/	

/*=========================AWAL MEMINTA INPUTAN=========================*/
	scanf("%f %f %f %f", &a, &b, &c, &d);
	scanf("%d %d", &tukar1, &tukar2);
/*=========================AKHIR MEMINTA INPUTAN=========================*/
	
/*=========================AWAL PROSES MENGMBIL ANGKA DEPAN KOMA=========================*/
	int depana= (int)a;			//	integer diisi dengan nilai variabel inputan yang diubah dari float ke onteger 
	int depanb= (int)b;			//agar mendapatkan angka tak berkoma
	int depanc= (int)c;
	int depand= (int)d;
/*=========================AKHIR PROSES MENGMBIL ANGKA DEPAN KOMA=========================*/

/*=========================AWAL PROSES MENGMBIL ANGKA BELAKANG KOMA=========================*/
	float blkga= a-depana;		//variabel belakang diisi dari hasil inputan user dikurangi dengan angka depan koma
	float blkgb= b-depana;		//sehingga hanya menyisakan angka di belakang koma saja
	float blkgc= c-depana;
	float blkgd= d-depana;
/*=========================AKHIR PROSES MENGMBIL ANGKA DEPAN KOMA=========================*/

/*=========================AWAL PROSES PENENTUAN HASIL ANGKA DEPAN DAN BELAKANG KOMA=========================*/
	float hasil11= depana+blkga;
	float hasil12= depana+blkgb;
	float hasil13= depana+blkgc;
	float hasil14= depana+blkgd;
	
//	switch(tukara){
//		case 1: 
//				printf("%.2f\n", hasil11);
//			break;
//		case 2: 
//				printf("%.2f\n", hasil12);
//			break;
//		case 3: 
//				printf("%.2f\n", hasil13);
//			break;
//		case 4: 
//				printf("%.2f\n", hasil14);
//			break;
//	}
	
	float hasil21= depanb+blkga;
	float hasil22= depanb+blkgb;
	float hasil23= depanb+blkgc;
	float hasil24= depanb+blkgd;
//	switch(tukarb){
//		case 1: 
//				printf("%.2f\n", hasil21);
//			break;
//		case 2: 
//				printf("%.2f\n", hasil22);
//			break;
//		case 3: 
//				printf("%.2f\n", hasil23);
//			break;
//		case 4: 
//				printf("%.2f\n", hasil24);
//			break;
//	}

	float hasil31= depanc+blkga;
	float hasil32= depanc+blkgb;
	float hasil33= depanc+blkgc;
	float hasil34= depanc+blkgd;
//	switch(tukarc){
//		case 1: 
//				printf("%.2f\n", hasil31);
//			break;
//		case 2: 
//				printf("%.2f\n", hasil32);
//			break;
//		case 3: 
//				printf("%.2f\n", hasil33);
//			break;
//		case 4: 
//				printf("%.2f\n", hasil34);
//			break;
//	}

	float hasil41= depand+blkga;
	float hasil42= depand+blkgb;
	float hasil43= depand+blkgc;
	float hasil44= depand+blkgd;
//	switch(tukard){
//		case 1: 
//				printf("%.2f\n", hasil41);
//			break;
//		case 2: 
//				printf("%.2f\n", hasil42);
//			break;
//		case 3: 
//				printf("%.2f\n", hasil43);
//			break;
//		case 4: 
//				printf("%.2f\n", hasil44);
//			break;
//	}
/*=========================AKHIR PROSES PENENTUAN HASIL ANGKA DEPAN DAN BELAKANG KOMA=========================*/

/*=========================AWAL PROSES PENENTUAN HASIL YANG DIMINTA=========================*/
	if((tukar1==1)&&(tukar2==1)){
		printf("%.2f\n", hasil11);
	}
	else if((tukar1==1)&&(tukar2==2)){
		printf("%.2f\n", hasil12);
	}
	else if((tukar1==1)&&(tukar2==3)){
		printf("%.2f\n", hasil13);
	}
	else if((tukar1==1)&&(tukar2==4)){
		printf("%.2f\n", hasil14);
	}
	else if((tukar1==2)&&(tukar2==1)){
		printf("%.2f\n", hasil21);
	}
	else if((tukar1==2)&&(tukar2==2)){
		printf("%.2f\n", hasil22);
	}
	else if((tukar1==2)&&(tukar2==3)){
		printf("%.2f\n", hasil23);
	}
	else if((tukar1==2)&&(tukar2==4)){
		printf("%.2f\n", hasil24);
	}
	else if((tukar1==3)&&(tukar2==1)){
		printf("%.2f\n", hasil31);
	}
	else if((tukar1==3)&&(tukar2==2)){
		printf("%.2f\n", hasil32);
	}
	else if((tukar1==3)&&(tukar2==3)){
		printf("%.2f\n", hasil33);
	}
	else if((tukar1==3)&&(tukar2==4)){
		printf("%.2f\n", hasil34);
	}
	else if((tukar1==4)&&(tukar2==1)){
		printf("%.2f\n", hasil41);
	}
	else if((tukar1==4)&&(tukar2==2)){
		printf("%.2f\n", hasil42);
	}
	else if((tukar1==4)&&(tukar2==3)){
		printf("%.2f\n", hasil43);
	}
	else if((tukar1==4)&&(tukar2==4)){
		printf("%.2f\n", hasil44);
	}
/*=========================AKHIR PROSES PENENTUAN HASIL YANG DIMINTA=========================*/
	return 0; //Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}
