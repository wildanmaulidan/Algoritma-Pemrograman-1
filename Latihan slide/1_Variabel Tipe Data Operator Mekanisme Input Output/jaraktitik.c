#include<stdio.h>
#include<math.h>

struct t_titik //nama struktur
{
    int x, y;  //anggota truktur
};
 
int main()
{ //inisialisasi variabel
    struct t_titik a, b;
    double jarak;
 
    printf ("Titik A\nKoordinat x : ");
    scanf ("%d", &a.x);  //masukan nilai
    printf ("Koordinat y : ");
    scanf ("%d", &a.y);  //masukan nilai
    puts ("\n");
    printf ("Titik B\nKoordinat x : ");
    scanf ("%d", &b.x);  //masukan nilai
    printf ("Koordinat y : ");
    scanf ("%d", &b.y);  //masukan niai
    puts ("\n");
 
    jarak = sqrt (pow((a.x - b.x),2) + pow((a.y - b.y),2));  //proses menghitung
    printf ("Jarak titik A dan titik B = %0.2f", jarak);  //tampilan hasil

    return 0;
}