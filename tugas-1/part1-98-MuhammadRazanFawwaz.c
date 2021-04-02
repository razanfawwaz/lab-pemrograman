#include <stdio.h>

int main() {
    int i;
    char nama_dpn[30], nama_blkg[30];

    printf("Aplikasi Generate Username Email");
    printf("\nSilahkan masukkan nama depan anda: ");
    scanf("%[^\n]", nama_dpn);
    printf("Silahkan masukkan nama belakang anda: ");
    scanf(" %[^\n]", nama_blkg);
    printf("Silahkan masukkan tanggal, bulan, dan tahun lahir anda (DDMMYY): ");
    scanf(" %d", &i);
    
    printf("Username email anda adalah: %s%s%d@gmail.com", nama_dpn, nama_blkg, i);
}