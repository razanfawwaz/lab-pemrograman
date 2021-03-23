#include <stdio.h>

int main (){
	char var[20];
	
	
	printf("Masukkan sebuah kalimat: ");
	scanf(" %[^\n]s", &var);
	printf("%s", var);
	return 0;
}
