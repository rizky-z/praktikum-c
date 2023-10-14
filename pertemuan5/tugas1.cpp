#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar;
    
    printf("Jam masuk  : ");
    scanf("%d", &jamMasuk);
    printf("Jam keluar : ");
    scanf("%d", &jamKeluar);
    
    if (jamKeluar >= jamMasuk) {
        int lamaBekerja = jamKeluar - jamMasuk;
        printf("Lama bekerja %d jam\n", lamaBekerja);
    } else {
        // Jam keluar lebih kecil dari jam masuk (misalnya jam masuk 10, jam keluar 2)
        int lamaBekerja = (12 - jamMasuk) + jamKeluar;
        printf("Lama bekerja %d jam\n", lamaBekerja);
    }
    
    return 0;
}

