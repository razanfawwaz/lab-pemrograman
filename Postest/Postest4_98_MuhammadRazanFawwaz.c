#include <stdio.h>

int main (){
   char name[30];
   char *str;
   char from, to;

   printf("Masukkan nama: ", *str);
   scanf("%[^\n]", name);

   str = name;

   printf("Masukkan huruf yang ingin diubah: ", *str);
   scanf(" %c", &from);

   printf("Masukkan huruf yang ingin ditambah: ", *str);
   scanf(" %c", &to);

   while (*str++ != '\0' ){
      if (*str == from) *str = to; 
   }

   printf("Hasil nama yang diubah: %s\n", name);
   
}
