#include<stdio.h>

int main(){
    int input;

    scanf("%d", &input);
    printf("%d\n", input);

    int ribu, ratus, puluh;
    ribu=input/1000;
    input-=ribu*1000;
    ratus=input/100;
    input-=ratus*100;
    puluh=input/10;
    input-=puluh*10;

    printf("%d %d %d %d", ribu, ratus,  puluh, input);

    return 0;
}   
