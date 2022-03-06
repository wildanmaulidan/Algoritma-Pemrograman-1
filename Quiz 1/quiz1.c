/*Saya Muhammad Rizki NIM [2107922] mengerjakan soal Kuis 1 Alpro 1 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>	//Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan
#include <math.h>	//Memanggil library math.h agar dapat menggunakan fungsi sqrt() guna perhitungan akar kuadrat

int main(){			//fungsi utama program

/*=========================AWAL DEKLARASI VARIABEL=========================*/
	int x, y, z, p, q, r;	//variabel masukan sisi segitiga 
	int a, b, c, P, Q, R;	//variabel untuk penentuan sisi miring
	int s1,s2;				//variabel menampung keliling segitiga
	int l1, l2;				//variabel menampung luas segitiga
/*=========================AKHIR DEKLARASI VARIABEL=========================*/

/*=========================AWAL MEMINTA INPUTAN=========================*/
	scanf("%d %d %d %d %d %d", &x, &y, &z, &p, &q, &r);
/*=========================AKHIR MEMINTA INPUTAN=========================*/

/*=========================AWAL PROSES PENENTUAN SISI MIRING UNTUK SEGITIGA SIKU-SIKU=========================*/
	//SEGITIGA PERTAMA===================================
	if (x >= y && x >= z)		//jika x adalah sisi paling besar, maka nilai x  mengisi variabel a sebagai sisi hipotenusa
	{
		a = x;
		b = y;
		c = z;
	} else if (y >= x && y >= z)
	{
		a = y;					//jika x adalah sisi paling besar, maka nilai Y mengisi variabel a sebagai sisi hipotenusa
		b = x;
		c = z;
	} else
	{
		a = z;					//jika x adalah sisi paling besar, maka nilai Z mengisi variabel a sebagai sisi hipotenusa
		b = x;
		c = y;
	}
	//SEGITIGA KEDUA======================================
	if (p >= q && p >= r)		//jika x adalah sisi paling besar, maka nilai p mengisi variabel P sebagai sisi hipotenusa
	{
		P = p;
		Q = q;
		R = r;
	} else if (q >= p && q >= r)
	{							//jika x adalah sisi paling besar, maka nilai q mengisi variabel P sebagai sisi hipotenusa
		P = q;
		Q = p;
		R = r;
	} else
	{							//jika x adalah sisi paling besar, maka nilai r mengisi variabel P sebagai sisi hipotenusa
		P = r;
		Q = p;
		R = q;
	}
/*=========================AKHIR PROSES PENENTUAN SISI MIRING UNTUK SEGITIGA SIKU-SIKU=========================*/

/*=========================AWAL PROSES PENENTUAN JENIS SEGITIGA, LUAS, DAN SELISIH LUAS=========================*/
	if ((a*a == (b*b + c*c))&&(P*P == (Q*Q + R*R)))	//jika kedua segitiga memiliki rumus yang sesuai dengan rumus segitiga siku-siku, maka if ini akan dijalankan
	{
		printf("segitiga siku-siku\n");				//menampilkan jenis segitiga
		s1=(a+b+c)/2;								//perhitungan keliling segitiga pertama
		l1=b*c/2;			//perhitungan luas segitiga pertama
		s2=(P+Q+R)/2;								//perhitungan keliling segitiga kedua
		l2=Q*R/2);								//perhitungan luas segitiga kedua
		if(l1>l2){									//jika luas segitiga pertama lebih besar, maka if ini akan dijalankan
			printf("segitiga pertama\n");
			l1-=l2;									//menentukan selisih antar luas segitiga pertama dengan segitiga kedua
			printf("selisih %d\n",l1);
		}
		else if(l1<l2){								//jika luas segitiga kedua lebih besar, maka if ini akan dijalankan
			printf("segitiga kedua\n");		
			l2-=l1;									//menentukan selisih antar luas segitiga kedua dengan segitiga pertama
			printf("selisih %d\n",l2);
		}
		else{										//kemungkinan jika besar luasnya sama
			printf("besar luas sama\n");			
		}
	} 
	else if (((a*a > (b*b + c*c))&&(P*P > (Q*Q + R*R)))||((a*a < (b*b + c*c))&&(P*P < (Q*Q + R*R))))	//jika segitiga bukan berjenis siku-siku, maka else if ini akan dijalankan
	{
		if((a==b && a==c)&&(P==Q && P==R))			//jika semua sisinya sama, maka if ini akan dijalankan
		{
		printf("segitiga sama sisi\n");				//menampilkan jenis segitiga
		s1=(a+b+c)/2;								//perhitungan keliling segitiga pertama
		l1=	a*(a*a-(a/2)*(a/2))/2;			//perhitungan luas segitiga pertama
		s2=(P+Q+R)/2;								//perhitungan keliling segitiga kedua
		l2=P*(P*P-(P/2)*(P/2))/2;			//perhitungan luas segitiga kedua
			if(l1>l2){									//jika luas segitiga pertama lebih besar, maka if ini akan dijalankan
				printf("segitiga pertama\n");
				l1-=l2;									//menentukan selisih antar luas segitiga pertama dengan segitiga kedua
				printf("selisih %d\n",l1);
			}
			else if(l1<l2){								//jika luas segitiga kedua lebih besar, maka if ini akan dijalankan
				printf("segitiga kedua\n");
				l2-=l1;									//menentukan selisih antar luas segitiga kedua dengan segitiga pertama
				printf("selisih %d\n",l2);
			}
			else{
				printf("besar luas sama\n");			//kemungkinan jika besar luasnya sama
		}
		}
		else if((a==b || a==c || b==c)&&(P==Q || P==R ||Q==R))	//jika hanya dua sisinya yang sama, maka else if ini akan dijalankan
		{
			if((a!=b || a!=c || b!=c)&&(P!=Q || P!=R||Q!=R))
        	{
   			printf("segitiga sama kaki\n");			//menampilkan jenis segitiga
			s1=(a+b+c)/2;							//perhitungan keliling segitiga pertama
			l1=a*(a*a-(a/2)*(a/2))/2;		//perhitungan luas segitiga pertama
			s2=(P+Q+R)/2;							//perhitungan keliling segitiga kedua
			l2=sqrt(s2*(s2-P)*(s2-Q)*(s2-R));		//perhitungan luas segitiga kedua
				if(l1>l2){
					printf("segitiga pertama\n");	//jika luas segitiga pertama lebih besar, maka if ini akan dijalankan
					l1-=l2;							//menentukan selisih antar luas segitiga pertama dengan segitiga kedua
					printf("selisih %d\n",l1);
				}
				else if(l1<l2){						//jika luas segitiga kedua lebih besar, maka if ini akan dijalankan
					printf("segitiga kedua\n");
					l2-=l1;							//menentukan selisih antar luas segitiga kedua dengan segitiga pertama
					printf("selisih %d\n",l2);
				}
				else{
					printf("besar luas sama\n");	//kemungkinan jika besar luasnya sama
				}
				
        	}
		}
		else	//jika of dan else of tidak terpenuhi, maka else ini akan dijlankan
		{
		printf("Segitiga sembarang.\n");			//menampilkan jenis segitiga
		s1=(a+b+c)/2;								//perhitungan keliling segitiga pertama
		l1=sqrt(s1*(s1-a)*(s1-b)*(s1-c));			//perhitungan luas segitiga pertama
		s2=(P+Q+R)/2;								//perhitungan keliling segitiga kedua
		l2=sqrt(s2*(s2-P)*(s2-Q)*(s2-R));			//perhitungan luas segitiga kedua
			if(l1>l2){								//jika luas segitiga pertama lebih besar, maka if ini akan dijalankan
				printf("segitiga pertama\n");
				l1-=l2;								//menentukan selisih antar luas segitiga pertama dengan segitiga kedua
				printf("selisih %d\n",l1);
			}
			else if(l1<l2){							//jika luas segitiga kedua lebih besar, maka if ini akan dijalankan
				printf("segitiga kedua\n");
				l2-=l1;								//menentukan selisih antar luas segitiga kedua dengan segitiga pertama
				printf("selisih %d\n",l2);
			}
			else{									//kemungkinan jika besar luasnya sama
				printf("besar luas sama\n");
			}
		}
	}
	else{											//jika of dan else of tidak terpenuhi, maka else ini akan dijlankan
		printf("tidak sama\n");
	}
/*========================= AKHIR PROSES PENENTUAN JENIS SEGITIGA, LUAS, DAN SELISIH LUAS=========================*/
	
	return 0; //fungsi agar program berjalan dengan normal
}
