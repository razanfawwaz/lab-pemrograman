#include <stdio.h>

void enkripsi_baru(char *data, char *arah, int pergeseran);

int main(){

    int i;
    char data[30], arah;
    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", data);
    printf("Besar pergeseran: ");
    scanf("%d", &i);
    printf("Arah pergeseran: ");
    scanf("%[^\n]", arah);

    enkripsi_baru(data, arah, i);
}

void enkripsi_baru(char *data, char *arah, int pergeseran)
{
    char hasil;
    if (arah == 'kanan')
    {
        hasil = data + 32 + pergeseran;
        printf("Hasil enkripsi: %s", hasil);
    }
    else if (arah == 'kiri')
    {
        hasil = data + 32 - pergeseran;
        printf("Hasil enkripsi: %s", hasil);
    }
    
}