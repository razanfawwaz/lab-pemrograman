#include <stdio.h>

char ganti_karakter(char *data, char find, char replace);

int main(void){
    char data[30], from, to;

    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", data);

    printf("Karakter yang dicari: ");
    scanf(" %c", &from);

    printf("Karakter yang dicari: ");
    scanf(" %c", &to);

    ganti_karakter(data, from, to);
     printf("Hasil string substitusi: %s", data);

}

char  ganti_karakter(char *data, char  find, char replace){
    while (*data++ != '\0')
    {
        if(*data == find) *data = replace;
    }
}
