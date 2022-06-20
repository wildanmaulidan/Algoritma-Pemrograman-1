#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int array[n];
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}

	int min=array[0];
	int max=array[0];
	int indexmin=0, indexmax=0;	
	for(int i=0; i<n; i++){
		if(array[i]<min){
			min=array[i];
			indexmin=i;
		}
		if(array[i]>max){
			max=array[i];
			indexmax=i;
		}
	}
	
	printf("terkecil : %d\n", indexmin);
	printf("terbesar : %d\n", indexmax);
	return 0;
}
