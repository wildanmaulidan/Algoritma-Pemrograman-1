#include <stdio.h>

int main()
{
    int i,j,n,t, A[100];
    int test;
	scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
    scanf("%d", &A[i]);
    }

    for(i=1; i<=(n-1); i++)
    {
        printf("Kondisi terkini di i=%d:\n", i);
        for(test=1; test<=n; test++)
        {
            printf("%d ", A[test]);
        }
        printf("\n");

        for(j=n; j>=(i+1); j--)
        {
            printf("     Kondisi terkini di j=%d:\n     ", j);
            for(test=1; test<=n; test++)
            {
                printf("%d ", A[test]);
            }
            printf("\n");

            if(A[j-1]>A[j])
            {
                t=A[j-1];
                A[j-1] = A[j];
                A[j] = t;
            }
        }
    }

    printf("Nilai minimum kedua : %d\n", A[2]);
    printf("Nilai minimum kedua : %d\n", A[n-1]);

    for(i=1; i<=n; i++)
    {
    printf("%d ", A[i]);
    }


    return 0;
}
