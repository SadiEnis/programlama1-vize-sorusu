#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi, sayi2;
    int sayi3;

    printf("Sayi: ");
    scanf("%f", &sayi);
    sayi3 = (int)sayi;
    sayi2 = sayi3 + 0.5;

    if(sayi >= sayi2)
        printf("%d", sayi3+1);
    else
        printf("%d", sayi3);
    return 0;
}
