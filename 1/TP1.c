/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP1 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>//Memanggil library "stdio.h"

int main(){//Fungsi utama agar program dapat dijalankan

/*=====MEMINTA INPUTAN USER=====*/
	//deklaraasi variabel
	int pakaian, mnt, dtk, pengerjaan, jmlh_istirahat, waktu_istirahat, total_waktu, jam,menit,detik; 
	//membaca masukan
	scanf("%d", &pakaian); //meminta inputan variabel "pakaian" untuk jumlah pakaian
	scanf("%d", &mnt);     //meminta inputan variabel "mnt" untuk waktu pengerjaan per baju dalam satuan menit
	scanf("%d", &dtk);	   //meminta inputan variabel "dtk" untuk waktu pengerjaan per baju dalam satuan detik
/*=====MEMINTA INPUTAN USER=====*/

/*=====Perhitungan Total Waktu Pengerjaan(dalam satuan detik=====)*/
	pengerjaan=((mnt*=60)+dtk)*pakaian;		//konversi nilai variaabel "mnt' dari satuan menit ke detik sekaligus perhitungan total waktu pengerjaan(tanpa istirahat) 
	jmlh_istirahat=(pengerjaan/2400);		//perhitungan berapa kali jumlah istirahat
	waktu_istirahat=jmlh_istirahat*300;		//perhitungan total waktu istirahat selama pengerjaan(dalam satuan detk)
	total_waktu=pengerjaan+waktu_istirahat;	//total waktu menjahit secara keseluruhan dalam satuan detik
/*=====Perhitungan Total Waktu Pengerjaan(dalam satuan detik=====)*/

/*=====Konversi waktu ke dalam satuan jam, menit dan detik=====*/
	jam=total_waktu/3600;	//perhitungan konversi dari satuan detik ke jam
	detik=total_waktu%3600; //sisa setelah dikurangi jam
	menit=detik/60;			//perhitungan konversi dari satuan detik ke menit
	detik=detik%60;			//perhitungan sisa waktu dalam satuan detik
/*=====Konversi waktu ke dalam satuan jam, menit dan detik=====*/	
	
/*=====MENAMPILKAN OUTPUT=====*/
	printf("Waktu istirahat      : %d kali\n", jmlh_istirahat);
	printf("Total waktu menjahit : %d jam, %d menit, %d detik\n", jam, menit,detik);	
/*=====MENAMPILKAN OUTPUT=====*/

	return 0;	//Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}
