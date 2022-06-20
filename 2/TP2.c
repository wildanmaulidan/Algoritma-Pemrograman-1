/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP2 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>	//Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan

int main(){		//fungsi utama yang akan dieksekusi pertamakali saat program dijalankan

/*===============DEKLARASI DAN ASSIGNMENT VARIABEL===============*/
	char a, b, c, d, e, f;	//variabel bertipe character untuk menampung huruf awal nama anggota-anggota avenger
	int angka;				//variabel bertipe integer untuk menampung angka yang diteriaki para avenger
	int vok=0;				//assignment variabel integer untuk perhitungan jumlah huruf vokal
/*===============DEKLARASI DAN ASSIGNMENT VARIABEL===============*/
//-------------------------------------------------------------------------
/*===============MEMINTA INPUTAN===============*/
	scanf("%c\n%c\n%c\n%c\n%c\n%c\n%d", &a, &b, &c, &d, &e, &f, &angka);	//meminnta inputan huruf pernatama nama avenger dan angka yang diteriaki
/*===============MEMINTA INPUTAN===============*/

/*===============PEMILIHAN/PERCABANGAN===============*/
	//Menggunakan percabangan IF
	/*-------------Menentukan Jumlah Huruf Vokal-------------*/
	if((a=='A')||(a=='I')||(a=='U')||(a=='E')||(a=='O')){	//jika variabel char a diisi oleh hufur vokal, maka variabel vok ditambah dengan 1
		vok+=1;
	}

	if((b=='A')||(b=='I')||(b=='U')||(b=='E')||(b=='O')){	//jika variabel char b diisi oleh hufur vokal, maka variabel vok ditambah dengan 1
		vok+=1;
	}
	
	if((c=='A')||(c=='I')||(c=='U')||(c=='E')||(c=='O')){	//jika variabel char c diisi oleh hufur vokal, maka variabel vok ditambah dengan 1
		vok+=1;
	}

	if((d=='A')||(d=='I')||(d=='U')||(d=='E')||(d=='O')){	//jika variabel char d diisi oleh hufur vokal, maka variabel vok ditambah dengan 1
		vok+=1;
	}
	
	if((e=='A')||(e=='I')||(e=='U')||(e=='E')||(e=='O')){	//jika variabel char e diisi oleh hufur vokal, maka variabel vok ditambah dengan 1
		vok+=1;
	}
	
	if((f=='A')||(f=='I')||(f=='U')||(f=='E')||(f=='O')){	//jika variabel char f diisi oleh hufur vokal, maka variabel vok ditambah dengan 1
		vok+=1;
	}
	/*-------------Menentukan Jumlah Huruf Vokal-------------*/
	/*-------------Menentukan Outout dan pengecekan inputan angka oleh user-------------*/
	if(vok==3){		//Jika variabel vok sama dengan 3, maka if ini akan dijalankan
		if(angka%2==0){		//jika nilai angka dibagi 2 tidak bersisa(genap), maka if ini akan dijalankan
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}
		else{				//jika nilai angka dibagi 2 bersisa(genap), maka else ini akan dijalankan
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	else if(vok>3){	//Jika variabel vok besar dari 3, maka else if ini akan dijalankan
		if(angka%2!=0){		//jika nilai angka dibagi 2 bersisa(ganjil), maka if ini akan dijalankan
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}
		else{				//jika nilai angka dibagi 2 tidak bersisa(ganjil), maka else ini akan dijalankan
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	else{			//Jika variabel vok tidak lebih besar sama dengan dari 3, maka else ini akan dijalankan
		if(angka==0){		//jika angka bernilai 0, maka if ini akan dijalankan
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}
		else{				//jika angka tidak bernilai 0, maka if ini akan dijalankan
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	/*-------------Menentukan Outout dan pengecekan inputan angka oleh user-------------*/
/*===============PEMILIHAN/PERCABANGAN===============*/
	
	return 0;	//Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}
