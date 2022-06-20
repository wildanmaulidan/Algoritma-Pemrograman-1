#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	
		for(int i=1; i<n; i++){
			for(int j=n; j>i; j--){
				printf(" ");
			}
			for(int j=1; j<=4; j++){
				printf("*");
			}
		printf("\n");		
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<i; j++){
			printf(" ");
			}
 			for(int j=n; j>=1; j--){
 			printf("*");
			}
		printf("\n");
		}
		
	printf("\n=================================================\n");	
		for(int i=1; i<=n; i++){
			for(int j=1; j<i; j++){
			printf("0");
			}
 			for(int j=1; j>=1; j--){
 			printf("1");
			}
			for(int j=n; j>i; j--){
				printf("0");
			}			
		printf("\n");
		}
	
	return 0;
}
