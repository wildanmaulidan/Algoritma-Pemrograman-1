#include <stdio.h>
#include <math.h>

int main()
{
    int tri1, tri2, tri3;
    int tria, trib, tric;

    int sama1=0, sama2=0;
    int kaki1=0, kaki2=0;
    int siku1=0, siku2=0;

    int L1=0, L2=0;
    int t1, t2;

    scanf("%d %d %d", &tri1, &tri2, &tri3);
    scanf("%d %d %d", &tria, &trib, &tric);

    if((tri1 == tri2) && (tri1 == tri3))
    {
        sama1 = 1;
    }
    else if((tri1 == tri2) || (tri2 == tri3) || (tri3 == tri1))
    {
        kaki1 = 1;
    }
    else
    {
        siku1 = 1;
    }

    if((tria == trib) && (tria == tric))
    {
        sama2 = 1;
    }
    else if((tria == trib) || (trib == tric) || (tric == tria))
    {
        kaki2 = 1;
    }
    else
    {
        siku2 = 1;
    }

    if((sama1 == 1) && (sama2 == 1))
    {  
        t1 = sqrt((tri1*tri1) - (tri2/2*tri2/2));
        t2 = sqrt((tria*tria) - (trib/2*trib/2));

        L1 = (tri1 * t1)/2;
        L2 = (tria * t2)/2;

        printf("segitiga sama sisi\n");

        if(L1 >= L2)
        {
            printf("segitiga pertama\n");
            printf("selisih %d\n", L1-L2);
        } 
        else{
            printf("segitiga kedua\n");
            printf("selisih %d\n", L2-L1);
        }
    }
    else if((kaki1 == 1) && (kaki2 == 1))
    {
        if(tri1 == tri2)
        {
            t1 = sqrt((tri1 * tri1) - (tri3/2 * tri3/2));
            L1 = (t1 * tri1)/2;
        }
        else if(tri1 == tri3){
            t1 = sqrt((tri1 * tri1) - (tri2/2 * tri2/2));
            L1 = (t1 * tri1)/2;
        }
        else{
            t1 = sqrt((tri2 * tri2) - (tri1/2 * tri1/2));
            L1 = (t1 * tri2)/2;
        }

        if(tria == trib)
        {
            t2 = sqrt((tria * tria) - (tric/2 * tric/2));
            L2 = (t2 * tria)/2;
        }
        else if(tria == tric){
            t2 = sqrt((tria * tria) - (trib/2 * trib/2));
            L2 = (t2 * tria)/2;
        }
        else{
            t2 = sqrt((trib * trib) - (tria/2 * tria/2));
            L2 = (t2 * trib)/2;
        }
        printf("segitiga sama kaki\n");

        if(L1 > L2)
        {
            printf("segitiga pertama\n");
            printf("selisih %d\n", L1-L2);
        }
        else{
            printf("segitiga kedua\n");
            printf("selisih %d\n", L2-L1);
        }
    }
    else if((siku1 == 1) && (siku2 == 1))
    {
        if((tri1>tri2) && (tri1>tri3))
        {
            L1 = (tri2 *tri3)/2;
        }
        else if((tri2>tri1) && (tri2>tri3))
        {
            L1 = (tri1 *tri3)/2;
        }
        else{
            L1 = (tri1 *tri2)/2;
        }

        if((tria>trib) && (tria>tric))
        {
            L2 = (trib *tric)/2;
        }
        else if((trib>tria) && (trib>tric))
        {
            L2 = (tria * tric)/2;
        }
        else{
            L2 = (tria *trib)/2;
        }
        printf("segitiga siku-siku\n");
        
        if(L1 >= L2)
        {
            printf("segitiga pertama\n");
            printf("selisih %d\n", L1-L2);
        }
        else{
            printf("segitiga kedua\n");
            printf("selisih %d\n", L2-L1);
        }
    }
    else{
        printf("tidak sama\n");
    }

    return 0;
}
