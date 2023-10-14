#include <stdio.h>

int main() {
    char jenis;
    float harga, diskon;
    
    printf("Kode     : ");
    scanf("%f", &harga);
    printf("Jenis    : ");
    scanf(" %c", &jenis);  // Menggunakan " %c" untuk menghindari karakter newline
    printf("Harga    : ");
    scanf("%f", &harga);

    // Menghitung diskon berdasarkan jenis barang
    if (jenis == 'A') {
        diskon = 0.10;  // Diskon 10% untuk jenis A
    } else if (jenis == 'B') {
        diskon = 0.15;  // Diskon 15% untuk jenis B
    } else if (jenis == 'C') {
        diskon = 0.20;  // Diskon 20% untuk jenis C
    } else {
        printf("Jenis barang tidak valid\n");
        return 1;  // Keluar dari program dengan kode error
    }

    // Menghitung harga setelah didiskon
    float hargaSetelahDiskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}
