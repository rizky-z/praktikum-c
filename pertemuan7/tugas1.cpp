#include <stdio.h>

int main() {
    int nilai[10];

    // Input nilai mahasiswa
    printf("Masukkan nilai mahasiswa:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Cetak nilai mahasiswa yang lulus
    printf("\nNilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("%d ", nilai[i]);
        }
    }

    return 0;
}
