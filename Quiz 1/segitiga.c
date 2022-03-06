#include<stdio.h>

int main(){
	int a=0, b=0, c=0;
	int x=0, y=0, z=0;
	int luas1=0, luas2=0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);
	
	if((a==b || a==c || c==b) && (x==y || x==z || z==y) ){
		if((a!=b || a!=c || b!=c) && (x!=y || x!=z || y!=z)){
			printf("segitiga sama kaki\n");	
			if( a==b ){
				luas1=c*(b*b-((c/2)*(c/2)))/2;
			}
			else if(a==c){
				luas1=b*(a*a-((b/2)*(b/2)))/2;
			}
			else{
				luas1=a*(c*c-((a/2)*(a/2)))/2;
			}
			
			if(x==y){
				luas2 = z(x*x-(z/2*z/2))/2;
			}
			else if(x==z){
				luas2=y(x*x-(y/2*y/2))/2;
			}
			else{
				luas2=x(y*y-(x2*x/2))/2;
			}
			
			if(luas1>luas2){
				printf("segitiga pertama\n");
				luas1-=luas2;
				printf("selisih %d\n",luas1);
			}
			else{
				printf("segitiga kedua\n");
				luas2-=luas1;
				printf("selisih %d\n",luas2);
			}
		}
	}
	
	return 0;
}
