#include <stdio.h>

int main() {
    int i, j, k;

    printf("Masukkan angka: ");
    scanf("%d", &j);

    for (i = 250; i >= j; i++)
    {
       printf("perulangan ke-%d\n", i);
    }

    
}