#include <stdio.h>

int main() {
    // Inisialisasi array A
    char A[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    int n = sizeof(A) / sizeof(A[0]);

    // Input karakter C
    char C;
    printf("Masukkan karakter = ");
    scanf(" %c", &C);

    // Periksa apakah C ada di dalam array
    int ada = 0; // 0 = false, 1 = true
    int jumlah_karakter = 0;

    printf("Array A:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", A[i]);
        if (A[i] == C) {
            ada = 1;
            jumlah_karakter++;
        }
    }

    // Jika C ada, tampilkan hasil
    if (ada) {
        printf("\nADA\nJumlah karakter %c: %d\n", C, jumlah_karakter);
    } else {
        // Jika C tidak ada
        printf("\nTIDAK ADA\n");
    }

    return 0;
}

