#include <stdio.h>

int main() {
    int A[11] = {0}; // Inisialisasi array dengan nilai 0
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int count = 0;

    for (int i = 0; i < 11; i++) {
        if (data[i] != 999 && data[i] > 9) {
            A[count] = data[i];
            count++;
        }
    }

    // Cetak array A
    printf("c. Isi array A:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d, ", A[i]);
    }

    return 0;
}
