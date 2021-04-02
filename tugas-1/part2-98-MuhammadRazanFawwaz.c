#include <stdio.h>

int main(){
    int i, j;

    printf("Program menghitung sisa pembagian");
    printf("\nMasukkan bilangan pertama: ");
    scanf("%d", &i);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &j);
    printf("Hasil sisa pembagian %d dengan %d adalah %d", i, j, i%j);
}