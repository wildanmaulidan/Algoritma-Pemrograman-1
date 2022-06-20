#include <stdio.h>

int main()
{
    float riil1, riil2, riil3, riil4;
    float temp1, temp2, temp3, temp4;
    float f1, f2, f3, f4;

    int num1, num2, num3, num4;
    int swap1, swap2, swap3, swap4;
    
    scanf("%f %f %f %f", &riil1, &riil2, &riil3, &riil4);
    scanf("%d %d %d %d", &swap1, &swap2, &swap3, &swap4);

    num1 = riil1;
    num2 = riil2;
    num3 = riil3;
    num4 = riil4;

    temp1 = riil1 - num1;
    temp2 = riil2 - num2;
    temp3 = riil3 - num3;
    temp4 = riil4 - num4;

    if((swap1 == 1 && swap2 == 2) || (swap1 == 2 && swap2 == 1))
    {
        f1 = num1 + temp2;
        f2 = num2 + temp1;
        f3 = num3 + temp4;
        f4 = num4 + temp3;
    }
    else if((swap1 == 1 && swap2 == 3) || (swap1 == 3 && swap2 == 1))
    {
        f1 = num1 + temp3;
        f2 = num2 + temp4;
        f3 = num3 + temp1;
        f4 = num4 + temp2;
    }
    else 
    {
        f1 = num1 + temp4;
        f2 = num2 + temp3;
        f3 = num3 + temp2;
        f4 = num4 + temp1;  
    }
    
    printf("%0.2f\n", f1);
    printf("%0.2f\n", f2);
    printf("%0.2f\n", f3);
    printf("%0.2f\n", f4);

    return 0;
}
