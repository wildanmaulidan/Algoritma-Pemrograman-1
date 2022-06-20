/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Kompetisi TP3 Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>       //Memanggil library stdio.h agar dapat menggunakan fungsi-fungsi yang diperlukan

typedef struct          //tipe data teersturktur untuk segitiga
{
    int x;              //menampung nilai x
    int y;              //menampung nilai y
} segitiga;             //nama struct

int main(){             //fungsi utama yang akan dieksekusi pertamakali saat program dijalankan
/*===============================Variabel yang digunankan===============================*/
    segitiga titik1;        //memnampung koordinat titik pertama segitiga
    segitiga titik2;        //memnampung koordinat titik kedua segitiga
    segitiga titik3;        //memnampung koordinat titik ketiga segitiga
    int kode;               //menampung kode masukan kuadran
    int persen;             //menampung nilai persentase luas
/*===============================Variabel yang digunankan===============================*/

/*===============================Meminta inputan===============================*/
    scanf("%d", &kode); //Meminta inputan user
    scanf("%d %d", &titik1.x, &titik1.y);
    scanf("%d %d", &titik2.x, &titik2.y);
    scanf("%d %d", &titik3.x, &titik3.y);
    scanf("%d",&persen);
/*===============================Meminta inputan===============================*/

    // printf("%d %d %d %d %d %d %d %d\n", kode, titik1.x, titik1.y, titik2.x, titik2.y, titik3.x, titik3.y, persen);(untuk pengecekan andai ada kesalahan)
    
/*===============================Menentukan angka akhir kode===============================*/
    int temp=0;               //variabel sementara untuk menampung nilai kode
    temp=kode/1000;         //menentukan nilai ribuan dari kode dan hasilnya akan ditampung oleh variabel temp
    kode-=temp*1000;        //menghilangkan nilai ribuan dari kode
    temp=kode/100;          //menentukan nilai ratusan dari kode dan hasilnya akan ditampung oleh variabel temp
    kode-=temp*100;         //menentukan nilai ratusan dari kode
    temp=kode/10;           //menentukan nilai puluhan dari kode dan hasilnya akan ditampung oleh variabel temp
    kode-=temp*10;          //menentukan nilai puluhan dari kode hingga didapat angka terakhir dari kode.
    // printf("\nKodenya : %d\n", kode);(untuk pengecekan)
/*===============================Menentukan angka akhir kode===============================*/

/*===============================Switch penentuan kuadran===============================*/
    switch (kode)
    {
    case 1:                 //jika kode berisi 1, maka semua titik
        if(titik1.x<=0){    //baik pada garis x maupun garis y harus
            titik1.x*=-1;   //bernilai positif
        }
        if(titik1.y<=0){    //jika terdapat nilai negatif, maka nilai tersebut dikali
            titik1.y*=-1;   //dengan -1 agar menghasilkan nilai positif
        }
        if(titik2.x<=0){
            titik2.x*=-1;
        }
        if(titik2.y<=0){
            titik2.y*=-1;
        }
        if(titik3.x<=0){
            titik3.x*=-1;
        }
        if(titik3.y<=0){
            titik3.y*=-1;
        }
        printf("A: %d, %d\n", titik1.x, titik1.y);      //menampilkan hasil refleksi
        printf("B: %d, %d\n", titik2.x, titik2.y);
        printf("C: %d, %d\n", titik3.x, titik3.y);
        break;                                          //penanda akhir kasus
////////////////////////////////////////////////////////////////////////////
    case 2:                 //jika kode berisi 2, maka semua titik pada sumbu x harus negatif
        if(titik1.x>=0){    //dan semua titik di dumbu y harus positif
            titik1.x*=-1;
        }
        if(titik1.y<=0){    //jika ada nilai x yang positif, maka akan dikali dengan -1
            titik1.y*=-1;   //jika ada nilai y yang negatif, maka akan dikali dengan -1
        }
        if(titik2.x>=0){
            titik2.x*=-1;
        }
        if(titik2.y<=0){
            titik2.y*=-1;
        }
        if(titik3.x>=0){
            titik3.x*=-1;
        }
        if(titik3.y<=0){
            titik3.y*=-1;
        }
        printf("A: %d, %d\n", titik1.x, titik1.y);  //menampilkan hasil refleksi
        printf("B: %d, %d\n", titik2.x, titik2.y);
        printf("C: %d, %d\n", titik3.x, titik3.y);
        break;                                      //penanda akhir kasus
//////////////////////////////////////////////////////////////////////////////      
    case 3:                 //jika kode berisi 3, maka semua titik pada sumbu x dan y harus negatif
        if(titik1.x>=0){
            titik1.x*=-1;
        }
        if(titik1.y>=0){    //jika ada nilai x yang positif, maka akan dikali dengan -1
            titik1.y*=-1;   //jika ada nilai y yang positif, maka akan dikali dengan -1
        }
        if(titik2.x>=0){
            titik2.x*=-1;
        }
        if(titik2.y>=0){
            titik2.y*=-1;
        }
        if(titik3.x>=0){
            titik3.x*=-1;
        }
        if(titik3.y>=0){
            titik3.y*=-1;
        }
        printf("A: %d, %d\n", titik1.x, titik1.y);  //menampilkan hasil refleksi
        printf("B: %d, %d\n", titik2.x, titik2.y);
        printf("C: %d, %d\n", titik3.x, titik3.y);
        break;                                      //penanda akhir kasus
//////////////////////////////////////////////////////////////////////////////   
    case 4:                 //jika kode berisi 4, maka semua titik pada sumbu x harus positif
        if(titik1.x<=0){    //dan semua titik di dumbu y harus negatif
            titik1.x*=-1;
        }
        if(titik1.y>=0){    //jika ada nilai x yang negatif, maka akan dikali dengan -1
            titik1.y*=-1;   //jika ada nilai y yang positif, maka akan dikali dengan -1
        }
        if(titik2.x<=0){
            titik2.x*=-1;
        }
        if(titik2.y>=0){
            titik2.y*=-1;
        }
        if(titik3.x<=0){
            titik3.x*=-1;
        }
        if(titik3.y>=0){
            titik3.y*=-1;
        }
        printf("A: %d, %d\n", titik1.x, titik1.y);  //menampilkan hasil refleksi
        printf("B: %d, %d\n", titik2.x, titik2.y);
        printf("C: %d, %d\n", titik3.x, titik3.y);
        break;                                      //penanda akhir kasus
//////////////////////////////////////////////////////////////////////////////      
    default:               //jika tidak ada case yang terpenuhi, maka default akan dijalankan
        printf("Kuadran tidak valid!\n");           //peringatan 
        printf("A: %d, %d\n", titik1.x, titik1.y);  //menampilkan hasil refleksi
        printf("B: %d, %d\n", titik2.x, titik2.y);
        printf("C: %d, %d\n", titik3.x, titik3.y);
        break;                                      //penanda akhir kasus
    }
/*===============================Switch penentuan kuadran===============================*/

/*===============================Perhitungan luas dan persentase===============================*/
//variabel untuk menampung jarak tiap titik
//variabel untuk menampung jarak tiap titik
    float tinggi, luas, alas; //untuk menampung nilai tinggi, alas dan luas segitiga
    //Perhitungan luas segitiga dengan menggunakan rumus sesuai TEOREMA HERON
    //---------------------------Menghitung Tinggi dan alas segitiga---------------------------
    alas=titik2.x-titik3.x;     //alas didapat dari selisih/jarak antara titik B dengan C
    if(alas<0){                 //jika nilai selisihnya bernilai negatif, maka dipositifkan dengan dikali -1
        alas*=-1;
    }
    tinggi=titik1.y-titik2.y;   //tinggi didapat dari selisih/jarak antara titik puncak(A) dengan titik terendah/alas
    if(tinggi<0){               //jika nilai yang didapat bernilai negatif, maka dipositifkan dengan dikali -1
        tinggi*=-1;
    }
    // printf("alasnya : %f\ntingginya : %f\n", alas, tinggi);//(pengecekan jika seandainya terjadi kesalahan)
    //---------------------------Menghitung Tinggi dan alas segitiga---------------------------                 
    luas= (alas*tinggi)/2;   //menghitung luas segitiga
    float lpersen=luas*persen/100;                             //menghitung luas segitiga berdasarkan persentase yang diminta
    printf("Luas: %.2fcm2\n", luas);                           //menampilkan luas
    printf("Luas %d%%: %.2fcm2\n", persen, lpersen);    //menampilkan luas berdasarkan persentase yang diminta
/*===============================Perhitungan luas dan persentase===============================*/

    return 0;           ////Menyatakan hasil keluaran dari fungsi main() adalah 0 dan menyatakan bahwa program berakhir dengan normal
}
