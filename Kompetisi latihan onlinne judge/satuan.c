#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
	int a,ribuan,ratusan,puluhan,satuan,hasil;
 
	printf("Masukkan Nilai = ");
	scanf("%d",&a);
 
	ribuan = a / 1000;
	ratusan = (a - ribuan * 1000) / 100;
	puluhan = (a - ribuan * 1000 - ratusan  * 100)/ 10;
	satuan = (a - ribuan * 1000 - ratusan * 100 - puluhan * 10 );
 
	printf("Nilai ribuan : %d \n",ribuan);
	printf("Nilai ratusan : %d \n",ratusan);
	printf("Nilai puluhan : %d \n",puluhan);
	printf("Nilai satuan : %d \n",satuan);
 
	system("PAUSE");
	return 0;
}
