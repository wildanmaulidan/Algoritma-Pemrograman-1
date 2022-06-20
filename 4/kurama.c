/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP4 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>	//Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan

int main(){			//fungsi utama yang akan dieksekusi pertamakali saat program dijalankan
/*===============DEKLARASI DAN ASSIGNMENT VARIABEL===============*/
	int n;			//variabel penampung angka
	char h;			//variabel penampung huruf
	int genap=0;	//variabel untuk angka genap, diisi 0 diawal agar dapat menghasilkan angka genap jika ditambah 2 setiap loop 
	int ganjil=1;	//variabel untuk angka ganjol, diisi 1 diawal agar dapat menghasilkan angka ganjil jika ditambah 2 setiap loop 
/*===============DEKLARASI DAN ASSIGNMENT VARIABEL===============*/

/*===============INPUT USER===============*/
	scanf("%c", &h);	//mengisi variabel huruf
	scanf("%d", &n);	//mengisi variabel angka
/*===============INPUT USER===============*/

/*===============MEMBENTUK POLA GAMBAR KURAMA DAN MAKANANNYA===============*/
		//Paket baris 1
		//terdiri dari baris sebanyak n(angka inputan)
		for(int i=0; i<n; i++){			//loop sebanyak nilai n
			for(int j=0; j<4*n; j++){	//tampilkan spasi sebanyak empat kali nilai n
				printf(" ");			//untuk space kosong  di sebelah kiri kepala kuranma
			}
			for(int j=0; j<=i; j++){	//loop untuk membuat tegitiga siku-siku
				printf("*");			//sebagai telinga kiri kurama
			}
			for(int j=n-1; j>i; j--){	//loop untuk membuat tegitiga siku-siku terbalik
				printf(" ");			//untuk membuat space kosong disamping kanan telinga kiri kurama
			}	
			for(int j=0; j<3*n; j++){	//loop untuk membuat segi empat
				printf(" ");			//untuk membuat space kosng ditengah atas kepala kurama
			}
			for(int j=n-1; j>i; j--){	//loop untuk membuat tegitiga siku-siku terbalik
				printf(" ");			//untuk membuat space kosong disamping kiri telinga kanan kurama
			}			
//			for(int j=0; j>n; j++){		//ga penting, tapi kalau mau telinganya kurama bervariasi, bolehpake yang ini
//				printf(" ");
//			}
			for(int j=0; j<=i; j++){	//loop untuk membuat tegitiga siku-siku
				printf("*");			//sebagai telinga kanan kurama
			}			
		printf("\n");					//enter setelah loop paket baris	
		}

		//Paket baris 2
		//terdiri dari baris sebanyak n(angka inputan) dikurang 1. tujuannya dikurang satu adalah untuk membuat mata pada loob berikutnya	
		for(int i=1; i<=n-1; i++){		//loop sebanyak nilai n-1
			for(int j=0; j<n; j++){		//loop untuk membuat segi empat
				printf("*");			//untuk membuat ekor kurama
			}
			for(int j=0; j<3*n; j++){	//membuat space kosong sebanyak tiga kali n
				printf(" ");			//untuk spasi di antara ekor dan kepala kurama
			}
			for(int j=0; j<n*5; j++){	//membuat * sebanyak 5 kali n
			printf("*");				//untuk jidat kurama
			}
		printf("\n");					//enter setelah loop paket baris
		}

		//Paket baris 3
		//isinya cuma satu baris, agar mata bagian atas kurama dapat terbentuk
		for(int i=1; i<=1; i++){		
			for(int j=0; j<n; j++){		//untuk membuat bagian ekor kurama
				printf("*");
			}
			for(int j=0; j<3*n; j++){	//membuat spasi sebanyak 3 kali n
				printf(" ");			// untuk spasi di antara ekor dan kepala kurama
			}
			for(int j=0; j<n; j++){		//membuat pelipis kiri kurama
			printf("*");
			}
			for(int j=0; j<n; j++){		//membuat spasi untuk mata kiri kurama
			printf(" ");
			}
 			for(int j=n; j>=1; j--){	//buat batang idung kurama
 			printf("*");
			}
			for(int j=0; j<n; j++){		//spasi buat mata kanan kurama
			printf(" ");
			}
 			for(int j=n; j>=1; j--){	//pelipis kanan kurama
 			printf("*");
			}
		printf("\n"); 					//enter setelah loop paket baris
		}
		
		//Paket baris 4
		//isinya cuma satu baris, agar mata bagian atas kurama dapat terbentuk
		for(int i=1; i<=1; i++){
			for(int j=0; j<n; j++){		//spasi kosong di samping ekor kurama
				printf(" ");
			}
			for(int j=0; j<n; j++){		//untuk membuat bagian ekor kurama
				printf("*");
			}
			for(int j=0; j<n*2; j++){	//membuat spasi sebanyak 2 kali n
				printf(" ");			// untuk spasi di antara ekor dan kepala kurama
			}
			for(int j=0; j<n; j++){		//membuat pelipis kiri kurama
			printf("*");
			}
			for(int j=0; j<n; j++){		//membuat spasi untuk mata kiri kurama
			printf(" ");
			}
 			for(int j=n; j>=1; j--){	//buat batang idung kurama
 			printf("*");
			}
			for(int j=0; j<n; j++){		//spasi buat mata kanan kurama
			printf(" ");
			}
 			for(int j=n; j>=1; j--){	//pelipis kanan kurama
 			printf("*");
			}
		printf("\n");					//enter setelah loop paket baris
		}
		
		//Paket baris 5
		//terdiri dari baris sebanyak n(angka inputan) dikurang 1. tujuannya dikurang satu adalah untuk menyesuaikan sesudah loop untuk mata kurama
		for(int i=1; i<=n-1; i++){		//loop sebanyak nilai n-1
			for(int j=0; j<n; j++){		//untuk spasi di samping kiri ekor kurama
				printf(" ");
			}
			for(int j=0; j<n; j++){		//membuat pangkal ekor kurama
				printf("*");
			}
			for(int j=0; j<n*2; j++){	//membuat spasi diantara ekor dan kepala
				printf(" ");
			}
			for(int j=0; j<n*5; j++){	//membuat rahang kurama
			printf("*");				//menampilkan * sebanyak 5 kali n
			}
		printf("\n");					//enter setelah loop paket baris
		}
		
		//Paket baris 6
		//teridiri dari baris sebanyak n
		for(int i=1; i<=n; i++){
			for(int j=0; j<n; j++){		//membuat spasi disamping badan kurama
				printf(" ");
			}
			for(int j=0; j<n*7; j++){	//membuat * senyak 7 kali n
				printf("*");			//untuk badan kurama
			}
			for(int j=0; j<n; j++){		//membuat spasi di samping kanan kurama
				printf(" ");
			}
			for(int j=0; j<n; j++){		//membuat bagian kiri makanan kurama
				printf("*");
			}
			for(int j=0; j<n; j++){		//membuat isi angka makanan kurama
				if((h=='a')||(h=='i')||(h=='u')||(h=='e')||(h=='o')){	//pemilihan, jika inputan huruf vokal, maka if ini akan dijalankan
					printf("%d", ganjil);		//tampilkan angka ganjil
					ganjil+=2;					//angka ganjil ditambah 2 setiap loopnya
					if(ganjil>9){				//jika angkanya sudah mentok
						ganjil=1;				//maka nilainya direset lagi
					}
				}
				else{							//pemilihan, jika inputan huruf konsonan, maka else ini akan dijalankan
					printf("%d", genap);		//tampilkan angka genap
					genap+=2;					//angka genap ditambah 2 setiap loopnya
					if(genap>8){				//jika angkanya sudah mentok
						genap=0;				//maka nilainya direset lagi
					}
				}
			}
			for(int j=0; j<n; j++){		//membuat bagian kanan makanan kurama
				printf("*");
			}
		printf("\n");				//enter setelah loop paket baris
		}
		
		//Paket baris 7
		//teridiri dari baris sebanyak n
		for(int i=1; i<=n; i++){
			for(int j=0; j<n; j++){		//membuat spasi samping kiri kurama
				printf(" ");
			}
			for(int j=0; j<n; j++){		//membuat kaki pertama
				printf("*");
			}
			for(int j=0; j<n; j++){		//spasi antar kaki
				printf(" ");
			}
			for(int j=0; j<n; j++){		//membuat kaki kedua
				printf("*");
			}
			for(int j=0; j<n; j++){		//spasi antar kaki
				printf(" ");
			}
			for(int j=0; j<n; j++){		//kaki ketiga
				printf("*");
			}
			for(int j=0; j<n; j++){		//membuat spasi antar kaki
				printf(" ");
			}
			for(int j=0; j<n; j++){		//kaki terakhir
				printf("*");
			}
			for(int j=0; j<n; j++){		//spasi sdisamping kuramaa
				printf(" ");			//berbentuk segi empat
			}
			for(int j=0; j<i; j++){		//membuaat spasi segitiga siku-siku  
				printf(" ");
			}
			for(int j=n; j>i; j--){		//membuaat * segitiga siku-siku terbalik
				printf("*");
			}
			for(int j=0; j<n; j++){		//membuat * segi empat untuk bagian bawah makanan kurama
				printf("*");
			}
			for(int j=n; j>i; j--){		//membuaat * segitiga siku-siku terbalik
				printf("*");
			}
		printf("\n");					//enter diakhir loop
		}
/*===============MEMBENTUK POLA GAMBAR KURAMA DAN MAKANANNYA===============*/	
	
	return 0;		//Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}





		
