#include <stdio.h>

int main(){
    int jumlah, i, uang, kembali;
    int order, total, total1, total2, total3, total4, total5, price;

    do{
    printf("Selamat datang di toko digital kami!");
    printf("\nBerikut aplikasi dan lisensi yang kami jual");
    printf("\n1). Zoom Premium 300 Participants 1 Bulan     Rp 250.000");
    printf("\n2). Zoom Premium 500 Participants 1 Bulan     Rp 450.000");
    printf("\n3). Netflix Private 3 Bulan Full Garansi      Rp 150.000");
    printf("\n4). Spotify Premium 2 Bulan Full Garansi      Rp  90.000");
    printf("\n5). Spotify Premium 1 Bulan Full Garansi      Rp  60.000");


    printf("\nMasukkan Nomor Pilihan yang ingin anda beli: ");
    scanf("%d", &order);

    switch (order)
    {
    case 1:
        printf("Zoom Premium 300 Participants 1 Bulan");
        printf("\nMasukkan Jumlah: ");
        scanf("%d", &jumlah);
        price = 250000;
        if (jumlah == 0)
        {
            total1 = 0;
        }
        else{
        total1 = price*jumlah;
        }
        break;
    case 2:
        printf("Zoom Premium 500 Participants 1 Bulan");
        printf("\nMasukkan Jumlah: ");
        scanf("%d", &jumlah);
        price = 450000;
        if (jumlah == 0)
        {
            total2 = 0;
        }
        else{
        total2 = price*jumlah;
        }
        break;
    case 3:
        printf("Netflix Private 3 Bulan Full Garansi");
        printf("\nMasukkan Jumlah: ");
        scanf("%d", &jumlah);
        price = 150000;
        if (jumlah == 0)
        {
            total3 = 0;
        }
        else{
        total3 = price*jumlah;
        }
        break;
    case 4:
        printf("Spotify Premium 2 Bulan Full Garansi");
        printf("\nMasukkan Jumlah: ");
        scanf("%d", &jumlah);
        price = 90000;
        if (jumlah == 0)
        {
            total4 = 0;
        }
        else{
        total4 = price*jumlah;
        }
        break;
    case 5:
        printf("Spotify Premium 1 Bulan Full Garansi");
        printf("\nMasukkan Jumlah: ");
        scanf("%d", &jumlah);
        price = 60000;

        if (jumlah == 0)
        {
            total5 = 0;
        }
        else{
        total5 = price*jumlah;
        }
        break;
    }

    printf("Masih ada tambahan?: (1 = YA & 2 = TIDAK)");
    scanf("%d", &i);
    }

    

   while (i != 1);
   total = total1 + total2 + total3 + total4 + total5;
 
        
        printf("Total Belanja anda adalah: %d", total);
        printf("\n Masukkan jumlah uang: ");
        scanf("%d", &uang);

    do{
        printf("Uang anda kurang! masukkan kembali uang anda: ");
        scanf("%d", &uang);
    }

    while (uang <= total);
    kembali = uang - total;

    printf("Kembalian anda adalah %d, terima kasih sudah berbelanja!", uang);
}