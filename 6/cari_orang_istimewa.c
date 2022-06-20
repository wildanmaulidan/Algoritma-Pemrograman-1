/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct{
    int nim, nilai;
    char kelas;
}mahasiswa;

int main()
{
    int n, i;
    scanf("%d", &n);
    mahasiswa data[n];
    
    for(i=0; i<n; i++){
        scanf("%d %c %d", &data[i].nim, &data[i].kelas, &data[i].nilai);
    }
    for(i=0; i<n; i++){
        if(data[i].nilai==100){
            printf("ada orang istimewa\n");
        }
    }

    return 0;
}
