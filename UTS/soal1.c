/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi UTS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>   //Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan
int main(){         //Fungsi utama yang akan dieksekusi
    int n;              // membuat variabel betipe data integer==>untuk menampung inputan nilai untuk pola
    scanf("%d", &n);    //meminta inputan n
/*=======================================POLA PAKET BARIS PERTAMA=======================================*/
		for(int i=0; i<n; i++){			//loop sebanyak nilai n untuk banyak baris
			for(int j=0; j<n*5; j++){	//tampilkan spasi sebanyak lima kali nilai n
				printf(" ");			//untuk space 
			}
			for(int j=n-1; j>i; j--){	//loop untuk membuat segitiga siku-siku terbalik
				printf(" ");			//untuk membuat space kosong 
			}	
	        for(int j=0; j<=i; j++){	//loop untuk membuat segitiga siku-siku
				printf("*");			//untuk karakter asterik
			}	
		printf("\n");					//enter setelah loop paket baris	
		}
/*=======================================POLA PAKET BARIS PERTAMA=======================================*/
/*=======================================POLA PAKET BARIS KEDUA=======================================*/
		for(int i=0; i<n; i++){			//loop sebanyak nilai n untuk banyak baris
			for(int j=0; j<n; j++){	    //tampilkan spasi sebanyak empat kali nilai n
				printf(" ");			//untuk space 
			}
			for(int j=n-1; j>i; j--){	//loop untuk membuat segitiga siku-siku terbalik
				printf(" ");			//untuk membuat space bentuk segitiga siku siku
			}	
	        for(int j=0; j<=i; j++){	//loop untuk membuat segitiga siku-siku
				printf("*");			//untuk segitiga karakter asterik
			}	
            for(int j=0; j<n*2; j++){	//tampilkan spasi sebanyak empat kali nilai n
				printf(" ");			//untuk space 
			}
            for(int j=0; j<n; j++){	    //tampilkan spasi sebanyak empat kali nilai n
				printf("*");			//untuk menampilkan karakter asterik
			}
            for(int j=0; j<n*3; j++){	//tampilkan spasi sebanyak empat kali nilai n*3
				printf(" ");			//untuk space 
			}
            for(int j=n-1; j>i; j--){	//loop untuk membuat segitiga siku-siku terbalik
				printf(" ");			//untuk membuat space 
			}	
	        for(int j=0; j<=i; j++){	//loop untuk membuat segitiga siku-siku
				printf("*");			//menampilkan karakter asterik
			}	
            for(int j=0; j<n; j++){	//tampilkan spasi sebanyak empat kali nilai n
				printf(" ");			//untuk space kosong  
			}
			for(int j=n-1; j>i-1; j--){	//loop untuk membuat segitiga siku-siku terbalik
				printf(" ");			//untuk membuat space 
			}	
	        for(int j=0; j<=i; j++){	//loop untuk membuat segitiga siku-siku
				printf("*");			//menampilkan segitiga karakter asterik
			}	
            for(int j=0; j<=i-1; j++){	//loop untuk membuat segitiga siku-siku
				printf("*");			//menampilkan segitiga karakter asterik
			}	
		printf("\n");					//enter setelah loop paket baris	
		}
/*=======================================POLA PAKET BARIS KEDUA=======================================*/
/*=======================================POLA PAKET BARIS KETIGA=======================================*/
		for(int i=0; i<n; i++){			//loop sebanyak nilai n untuk banyak baris
			for(int j=0; j<n; j++){    	//tampilkan spasi sebanyak empat kali nilai n
				printf("*");			//untuk karakter asterik
			}
			for(int j=0; j<n*2; j++){	//tampilkan spasi sebanyak empat kali nilai dua kali n
				printf(" ");			//untuk space 
			}
			for(int j=0; j<n*3; j++){	//tampilkan spasi sebanyak empat kali nilai tiga kali n
				printf("*");			//untuk karakter asterik
			}
			for(int j=0; j<n; j++){ 	//tampilkan spasi sebanyak empat kali nilai n
				printf(" ");			//untuk space kosong  
			}
			for(int j=0; j<n; j++){	    //tampilkan spasi sebanyak nilai n
				printf("*");			//untuk karakter asterik
			}
			for(int j=0; j<n*2; j++){	//tampilkan spasi sebanyak dua kali nilai n
				printf(" ");			//untuk space kosong 
			}
			for(int j=0; j<n*2+1; j++){	//tampilkan spasi sebanyak dua kali nilai n
				printf("*");			//untuk space kosong  
			}
		printf("\n");					//enter setelah loop paket baris	
		}
/*=======================================POLA PAKET BARIS KETIGA=======================================*/
/*=======================================POLA PAKET BARIS KEEMPAT=======================================*/
		for(int i=0; i<n; i++){			//loop sebanyak nilai n untuk banyak baris
			for(int j=0; j<n; j++){ 	//tampilkan spasi sebanyak nilai n
				printf(" ");			//untuk space kosong  
			}
	        for(int j=0; j<=i-1; j++){	//loop untuk membuat segitiga siku-siku
				printf(" ");			//untuk space kosong
			}
 			for(int j=n; j>i; j--){	    //loop untuk membuat segitiga siku-siku terbalik
				printf("*");			//untuk membuat segitiga asteerik
			}
            for(int j=0; j<n*2; j++){	//tampilkan spasi sebanyak dua kali nilai n
				printf(" ");			//untuk space 
			}
            for(int j=0; j<n; j++){	    //loop sebanyak nilai n
				printf("*");			//untuk menampilkan karakter asterik
			}
            for(int j=0; j<n*3; j++){	//tampilkan spasi sebanyak tiga kali nilai n
				printf(" ");			//untuk space kosong  
			}
            for(int j=0; j<=i-1; j++){	//loop untuk membuat segitiga siku-siku
				printf(" ");			//sebagai space kosong
			}
 			for(int j=n; j>i; j--){	    //loop untuk membuat segitiga siku-siku terbalik
				printf("*");			//untuk menampilkan karakter asterik
			}
			for(int j=0; j<n; j++){	    //tampilkan spasi sebanyak nilai n
				printf(" ");			//untuk space kosong  
			}
            for(int j=0; j<=i; j++){	//loop untuk membuat segitiga siku-siku
				printf(" ");			//sebagai space kosong
			}
 			for(int j=n; j>i; j--){	    //loop untuk membuat segitiga siku-siku terbalik
				printf("*");			//untuk menampilkan karakter asterik
			}
 			for(int j=n; j>i+1; j--){	//loop untuk membuat segitiga siku-siku terbalik
				printf("*");			//untuk menampilkan karakter asterik
			}
		printf("\n");					//enter setelah loop paket baris	
		}
/*=======================================POLA PAKET BARIS KEEMPAT=======================================*/
/*=======================================POLA PAKET BARIS KELIMA=======================================*/
		for(int i=0; i<n; i++){			//loop sebanyak nilai n
			for(int j=0; j<n*5; j++){	//tampilkan spasi sebanyak lima kali nilai n
				printf(" ");			//untuk space kosong  di sebelah kiri kepala kuranma
			}
            for(int j=0; j<=i-1; j++){	//loop untuk membuat segitiga siku-siku
				printf(" ");			//sebagai space kosong
			}
 			for(int j=n; j>i; j--){	    //loop untuk membuat segitiga siku-siku terbalik
				printf("*");			//untuk membuat segitiga karakter asterik
			}
		printf("\n");					//enter setelah loop paket baris	
		}
/*=======================================POLA PAKET BARIS KELIMA=======================================*/
    return 0;           //Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}