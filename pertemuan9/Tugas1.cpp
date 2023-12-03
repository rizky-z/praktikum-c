#include <stdio.h>

int main() {
    // Inisialisasi array A
    int A[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int n = sizeof(A) / sizeof(A[0]);

    // Input bilangan integer N
    int N;
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);

    // Periksa apakah N ada di dalam array
    int ada = 0; // 0 = false, 1 = true
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
        if (A[i] == N) {
            ada = 1;
            printf("\nADA\nLokasi bilangan yang sama: ");
            break;
        }
    }

    // Jika N ada, tampilkan lokasi
    if (ada) {
        for (int i = 0; i < n; i++) {
            if (A[i] == N) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        // Jika N tidak ada
        printf("\nTIDAK ADA\n");
    }

    return 0;
}

