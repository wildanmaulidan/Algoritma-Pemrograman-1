#include<stdio.h>
#include<string.h>

int i, j;

void hitung_powerboss(char jurus_bos[50], int *power_bos);
void hitung_power_warr(int n, char nama_warrior[n][50], char jurus_warrior[n][50], char elemen_bos[50], char elemen_warrior[n][50], int power_warrior[n]);
void elemen(int n, char elemen_warrior[n][50], char elemen_bos[50], int power_warrior[n]);
void hasil(int n, char nama_warrior[n][50], int power_warrior[n], int *power_bos);
