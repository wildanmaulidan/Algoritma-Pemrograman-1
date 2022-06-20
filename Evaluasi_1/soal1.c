/*Saya Muhammad Rizki NIM 2107922 mengerjakan soal Evaluasi Alpro1 C2 2021 dalam mata kuliah Algoritma Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
#include<stdio.h>

int main(){
	int m, i, j, n;
	scanf("%d", &m);
	char kata[m];
	for(int i=0; i<m; i++){
		scanf(" %c", &kata[i]);
	}
	
	for(int i=0; i<m; i++){
		printf("%c", kata[i]);
	}
	printf("\n");
//============Pisahkan yang Awal
	char kataawal[m/2];
	for(int i=0; i<m/2; i++){
		kataawal[i]=kata[i];
	}
	for(int i=0; i<m/2; i++){
		printf("%c",kataawal[i]);
	}
//============Pisahkan yang Awal
		printf("\n");
//============Pisahkan yang Akhir
	char kataakhir[m-m/2];
	for(int i=0; i<m/2; i++){
		kataakhir[i]=kata[i+m/2];
	}
	for(int i=0; i<m/2; i++){
		printf("%c",kataakhir[i]);
	}
//============Pisahkan yang Akhir
	printf("\n");
		
//============minta panjang pola
	scanf("%d", &n);
//============minta panjang pola

//=============Pola hati
	int reset=0;
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%c", kataawal[reset]);
            reset++;
            if(reset==m/2){
            	reset=0;
			}
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
          printf("%c", kataakhir[reset]);
            reset++;
            if(reset==m-m/2){
            	reset=0;
			}
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
          printf("%c", kataakhir[reset]);
            reset++;
            if(reset==m/2){
            	reset=0;
			}

        printf("\n");
    }
//=============Pola hati

//=============SOALNYA GAWAT SEKALI
	
	return 0;
}
