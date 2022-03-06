/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi UTS Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>                       //Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan

int main(){                             //Fungsi utama yang akan dieksekusi
    int n, awal, akhir;                 //mendeklarasikan variabel
    scanf("%d", &n);                    //meminta inputan banyak huruf masukan
/*======================================MINTA-MINTA HURUF======================================*/
    char huruf[n];		                //membuat array dengan panjang sebanyak nilai n
    for(int i=0; i<n; i++)	            //perulangan for untuk memasukan inputan huruf ke array huruf
    {
    	scanf(" %c", &huruf[i]);	    //meminta inputan tiap huruf. JANGAN SAMPAI LUPA KALAU UNTUK MEMINTA INPUTAN VARIBEL CHAR HARUS ADA SPASI DULU!
    }
/*======================================MINTA-MINTA HURUF======================================*/
    scanf("%d%d", &awal, &akhir);       //meminta nilai rentang index awal dan akhir untuk pencarian kartu
    int banyakcari;                     //deklarasi variabel bertipe integer untuk menampung banyaknya huruf yang ingin dicari
    scanf("%d", &banyakcari);           //meminta inputan variabel bertipe integer untuk menampung banyaknya huruf yang ingin dicari
/*======================================MENGISI ARRAY PENCARIAN======================================*/
    char arrcari[banyakcari];           //membuat array unntuk huruf yang dicari sepanjang nilai variabel banyakcari
    char arrhasil[banyakcari];		    //membuat array untuk hasil banyak huruf yang dicari sepanjang nilai variabel banyakcari
    for(int i=0; i<banyakcari; i++)	    //perulangan for untuk masukan array kartu yang ingin dicari
    {
    	scanf(" %c", &arrcari[i]);      //meminta inputan tiap huruf. JANGAN SAMPAI LUPA KALAU UNTUK MEMINTA INPUTAN VARIBEL CHAR HARUS ADDA SPASI DULU!
    }
    for(int i=0; i<banyakcari; i++)	    //perulangan for untuk mengisi array arrhasil 
    {
        arrhasil[i]=0;                  //diisi dengan nilai 0, agar tidak ada masalah pada perhitungam selanjutnya	
    }
/*======================================MENGISI ARRAY PENCARIAN======================================*/
/*======================================PROSES PENCARIAN======================================*/
    for(int i=awal; i<=akhir; i++){     //membuat for sebanyak jarak inputan awal dan akhir
        for(int j=0; j<banyakcari; j++){//membuat for lagi sebanyak jumlah huruf yang ingin dicari
            if(huruf[i]==arrcari[j]){   //membandingkan huruf dalam array huruf dengan huruf yang ingin dicari satu per satu
                arrhasil[j]+=1;         //jika if terpenuhi, maka jumlah huruf yang didapat akan ditandai dengan arrhasil yang nilainya bertambah satu
            }
        }
    }
/*======================================PROSES PENCARIAN======================================*/
/*======================================PROSES PENCARIAN======================================*/
    for(int i=0; i<banyakcari; i++)	    //perulangan for untuk menampilkan hasil pencarian sebanyak jumlah huruf yang ingin dicari
    {
        if(i==banyakcari-1){            //pemilihan jika kondisinya sudah sampai di index terakhir
            printf("%d\n", arrhasil[i]);//maka output akan ditampilkan dengan disertai enter dan tanpa spassi
        }
        else{                           //jika kondisi yang diatas tidak terpenuhi
    	printf("%d ", arrhasil[i]);     //maka output akan ditampilkan dengan disertai spasi tanpa enter
        }
    }
/*======================================PROSES PENCARIAN======================================*/
//=================================BUAT NGETES, TAKUTNYA ADA KESALAHAN===================================================
    // for(int i=1; i<=n; i++)	//perulangan for untuk memasukan isi tiap kartu techi
    // {
    // 	printf("%c", huruf[i]);	//meminta inputan tiap kartu techi. techi mengambil kartu berjenis huruf. JANGAN SAMPAI LUPA KALAU UNTUK MEMINTA INPUTAN VARIBEL CHAR HARUS ADDA SPASI DULU!
    // }
    // printf("\n");
    // printf("%d%d",awal, akhir);
    // printf("\n");
    // for(int i=1; i<=banyakcari; i++){	//perulangan for untuk memasukan isi tiap kartu techi
    // 	printf("%c", arrcari[i]);	//meminta inputan tiap kartu techi. techi mengambil kartu berjenis huruf. JANGAN SAMPAI LUPA KALAU UNTUK MEMINTA INPUTAN VARIBEL CHAR HARUS ADDA SPASI DULU!
    // }
    return 0;
}