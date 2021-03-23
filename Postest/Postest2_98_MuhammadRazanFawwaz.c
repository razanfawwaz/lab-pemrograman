#include <stdio.h>

int main() {
	int alas, tinggi, hitung;
	
	printf("Masukkan Alas: ");
	scanf("%d", &alas);
	printf("Masukkan Tinggi: ");
	scanf("%d", &tinggi);
	
	hitung = (alas * tinggi)/2;
	printf("%d", hitung);
	return 0;
}
