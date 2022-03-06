#include <stdio.h>

int main()
{
	char c1, c2, c3, c4, c5, c6;
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);
	
	int i1=0, i2=0, i3=0, i4=0, i5=0, i6=0;
	
	if((c1=='a')||(c1=='e')||(c1=='i')||(c1=='o')||(c1=='u')){
		i1=1;
	}
	
	if((c2!='a')&&(c2!='e')&&(c2!='i')&&(c2!='o')&&(c2!='u')){
		i2=1;
	}
	if((c3=='a')||(c3=='e')||(c3=='i')||(c3=='o')||(c3=='u')){
		i3=1;
	}
	if((c4!='a')&&(c4!='e')&&(c4!='i')&&(c4!='o')&&(c4!='u')){
		i4=1;
	}
	if((c5=='a')||(c5=='e')||(c5=='i')||(c5=='o')||(c5=='u')){
		i5=1;
	}
	if((c6!='a')&&(c6!='e')&&(c6!='i')&&(c6!='o')&&(c6!='u')){
		i6=1;
	}

	if((i1+i3+i5==3) && (i2+i4+i6==3)){
		printf("kombinasi valid\n");
	}
	else if((i2+i4+i6==0) && (i1+i3+i5==0)){
		printf("kombinasi valid\n");
	}
	else{
		printf("kombinasi tidak valid\n");
	}
	
	return 0;
}
