#include <stdio.h>

int main() {
    int A[11] = {0}; // Inisialisasi array dengan nilai 0
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int count = 1; // Dimulai dari indeks 1 karena urutan dimulai dari 2

    for (int i = 0; i < 11; i++) {
        if (data[i] != 999 && data[i] % 2 != 0) {
            A[count] = data[i];
            count += 2; // Menyimpan pada setiap indeks yang berjarak 2
        }
    }

    // Cetak array A
    printf("e. Isi array A:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d, ", A[i]);
    }

    return 0;
}
