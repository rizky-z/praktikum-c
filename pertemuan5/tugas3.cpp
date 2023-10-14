#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    printf("Jam masuk  : ");
    scanf("%d", &jamMasuk);
    printf("Jam keluar : ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        // Jam keluar lebih kecil dari jam masuk (misalnya jam masuk 10, jam keluar 2)
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    switch (lamaParkir) {
        case 1:
            biaya = 2000;
            break;
        case 2:
            biaya = 2000;
            break;
        default:
            biaya = 2000 + (lamaParkir - 2) * 500;
    }

    printf("Biaya = %d\n", biaya);

    return 0;
}

