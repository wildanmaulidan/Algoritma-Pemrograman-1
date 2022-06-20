#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len, j;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
	len = strlen(str);
	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] == '*')
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;	
		} 
	}	
	printf("\n The Final String after Removing All Occurrences of * = %s ", str);
	
  	return 0;
}