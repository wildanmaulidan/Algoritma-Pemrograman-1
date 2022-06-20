/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP5 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>		//Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan

int main()				//fungsi utama yang akan dieksekusi pertamakali saat program dijalankan
{
/*===============DEKLARASI DAN ASSIGNMENT VARIABEL===============*/
	int techi;			//variabel untuk menampungg banyak kartu techi dan untuk menentukan panjang array nanti
    int ellona;    		//variabel untuk menampungg banyak kartu ellona dan untuk menentukan panjang array nanti
	int angkatechi=0;	//variabel untuk menghitung nilai dari kartu yang diambil techi
    int angkaellona=0;	//variabel untuk menghitung nilai dari kartu yang diambil ellona
/*===============DEKLARASI DAN ASSIGNMENT VARIABEL===============*/

/*===============Techi mengambil kartu===============*/
	scanf("%d", &techi);		//meminta inputan banyak kartu techi
	char arrtechi[techi];		//membuat array dengan panjang sebanyak kartu yang diambil Techi
    for(int i=0; i<techi; i++)	//perulangan for untuk memasukan isi tiap kartu techi
    {
    	scanf(" %c", &arrtechi[i]);	//meminta inputan tiap kartu techi. techi mengambil kartu berjenis huruf. JANGAN SAMPAI LUPA KALAU UNTUK MEMINTA INPUTAN VARIBEL CHAR HARUS ADDA SPASI DULU!
    }
/*===============Techi mengambil kartu===============*/
    
/*===============Ellona mengambil kartu===============*/
	scanf("%d", &ellona);		//meminta inputan banyak kartu ellona
	int arrellona[ellona];		//membuat array dengan panjang sebanyak kartu yang diambil ellona
    for(int i=0; i<ellona; i++)	//perulangan for untuk memasukan isi tiap kartu ellona
    {
    	scanf("%d", &arrellona[i]);	//meminta inputan tiap kartu techi. techi mengambil kartu berjenis angka
    	angkaellona+=arrellona[i];	//semua inputan kartu akan lansung dijumlahkan untuk menentukan nilai katu ellona
    }								//karena ellona mengambil kartu berjenis angka, maka nilai kartunya bisa lansung dijumlahkan tanpa dikonversi dulu seperti kartunya techi
/*===============Ellona mengambil kartu===============*/
	
/*===============Membandingkan jjumlah dan nilai kartu techi dan ellona===============*/
	if(techi==ellona){	//jika jumlah kartu yang diambil techi dan ellona sama, maka if ini akandijalankan
		for(int i=0; i<techi; i++){		//perulangan sebanyak kartu techi atau ellona. karena jika sudah masuk if ini maka sudah dipastikan bahwa banyakk kartunya sama saja
			printf("%c ", arrtechi[i]);	//menampilkan kartu techi
			if(i!=techi-1){				//jika masih belum memasuki kartu terakhir ellona
			printf("%d ", arrellona[i]);//maka kartu ellona ditampilkan dengan spasi				
			}
			else{						//jika sudah memasuki kartu terakhir ellona
			printf("%d\n", arrellona[i]);//maka kartu ellona ditampilkan tanpa spasi dan ditambah dengan enter		
			}
		}
		
		for(int i=0; i<techi; i++){	//perulangan untuk mengkonversi nilai kartu techi
			if(arrtechi[i]=='A' || arrtechi[i]=='J' || arrtechi[i]=='S'){	//Nilai huruf A sama dengan 1, huruf B bernilai 2, dan seterusnya. 
				angkatechi+=1;												//Ketika nilai huruf I adalah 9, nilai huruf J kembali ke 1, lalu nilai huruf K menjadi 2, begitupun seterusnya.
			}
			if(arrtechi[i]=='B' || arrtechi[i]=='K' || arrtechi[i]=='T'){	//setiap memasuki if, angkatechi akan bertambah sesuai ketentuannya
				angkatechi+=2;
			}
			if(arrtechi[i]=='C' || arrtechi[i]=='L' || arrtechi[i]=='U'){
				angkatechi+=3;
			}	
			if(arrtechi[i]=='D' || arrtechi[i]=='M' || arrtechi[i]=='V'){
				angkatechi+=4;
			}
			if(arrtechi[i]=='E' || arrtechi[i]=='N' || arrtechi[i]=='W'){
				angkatechi+=5;
			}
			if(arrtechi[i]=='F' || arrtechi[i]=='O' || arrtechi[i]=='X'){
				angkatechi+=6;
			}
			if(arrtechi[i]=='G' || arrtechi[i]=='P' || arrtechi[i]=='Y'){
				angkatechi+=7;
			}
			if(arrtechi[i]=='H' || arrtechi[i]=='Q' || arrtechi[i]=='Z'){
				angkatechi+=8;
			}
			if(arrtechi[i]=='I' || arrtechi[i]=='R' ){
				angkatechi+=9;
			}
			
		}
			if(angkatechi==angkaellona){	//jika nilai kartu techi dan ellona sama
				printf("Nilai kartu mereka sama,\nAda rasa suka di antara mereka.\n");	//maka akan tampil kalimat ini
			}
			else{	//jika nilai kartu techi dan ellona tidak sama						
				printf("Nilai kartu mereka tidak sama,\nMereka cukup berteman baik saja.\n");	//maka akan tampil kalimat ini
			}
	}
	else{	//jika jumlah kartu yang diambil techi dan ellona sama, maka if ini akandijalankan
		printf("Jumlah kartu mereka tidak sama,\nPertemanan mereka tidak akan serasi.\n");	//maka akan tampil kalimat ini
	}
/*===============Membandingkan jjumlah dan nilai kartu techi dan ellona===============*/
	
    return 0;	//Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}
