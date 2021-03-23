#include <stdio.h>

int main(){
	int panjang, lebar, ctk, i, j;
	char abjad ='a';
	printf("Masukkan Panjang: ");
	scanf("%d", &panjang);
	
	printf("Masukkan Lebar: ");
	scanf("%d", &lebar);
	
	for (i = 0; i < panjang; i++){
		for(j = 0; j < lebar; j++){
			printf("%c ", abjad++);
		}
		printf("\n");
	}
}

