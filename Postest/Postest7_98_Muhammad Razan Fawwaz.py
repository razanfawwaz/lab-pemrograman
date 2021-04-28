# Membaca Input
bawah = int(input("Masukkan Batas Bawah: "))
atas = int(input("Masukkan Batas Atas: "))

arr_angka = [j for j in range(bawah, atas +1)]


for i in arr_angka:
    if (i == 2 or i == 3 or i == 5 or i == 7) or (i % 2 != 0 and i % 3 != 0 and i % 5 != 0 and i % 7 != 0):
       print(i)
