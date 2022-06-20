#include<stdio.h>
 
int main()
{
char message[100], ch;
int i, key;
printf("Enter a message to encrypt: ");
gets(message);
printf("Enter key: ");
scanf("%d", &key);
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch + key;
if(ch > 122){
ch ='a';
}
message[i] = ch;
}
}
printf("Encrypted message: %s", message);
return 0;
}
