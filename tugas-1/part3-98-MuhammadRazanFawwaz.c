#include <stdio.h>

int main(){
    int i, j;

    printf("Masukkan Bilangan yang ingin dicek: ");
    scanf("%d", &i);

    if (i % 2 == 1 && i > 0)
    {
        printf("Bilangan Ganjil");
    }
    else if (i % 2 == 0 && i > 0)
    {
        printf("Bilangan Genap");
    }
    else if (i < 0)
    {
        printf("Bilangan negatif");
    }
    
    
    
}