#include <stdio.h>

int main() {
    // Inisialisasi array A
    int A[] = {12, 8, 17, 5, 15};
    int nA = sizeof(A) / sizeof(A[0]);

    // Inisialisasi array B
    int B[] = {5, 11, 7, 25, 9, 12, 14};
    int nB = sizeof(B) / sizeof(B[0]);

    // Inisialisasi array C
    int C[12] = {0};  // Set semua elemen array C menjadi 0
    int nC = sizeof(C) / sizeof(C[0]);

    // Salin nilai yang lebih besar dari 10 dari array A ke array C
    int indexC = 0;
    for (int i = 0; i < nA; i++) {
        if (A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Salin nilai yang lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < nB; i++) {
        if (B[i] > 10) {
            C[indexC] = B[i];
            indexC++;
        }
    }

    // Cetak isi array C
    printf("a. ");
    for (int i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Reset array C menjadi 0
    for (int i = 0; i < nC; i++) {
        C[i] = 0;
    }

    // Salin nilai yang lebih besar dari 10 dari array A ke array C (kecuali yang berindeks 2 dan 4)
    indexC = 0;
    for (int i = 0; i < nA; i++) {
        if (A[i] > 10 && i != 2 && i != 4) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Salin nilai yang lebih besar dari 10 dari array B ke array C (kecuali yang berindeks 3 dan 5)
    for (int i = 0; i < nB; i++) {
        if (B[i] > 10 && i != 3 && i != 5) {
            C[indexC] = B[i];
            indexC++;
        }
    }

    // Cetak isi array C
    printf("b. ");
    for (int i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

