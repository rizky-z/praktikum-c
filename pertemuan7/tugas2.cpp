#include <stdio.h>

int main() {
    int A[11] = {0}; // Inisialisasi array dengan nilai 0
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int count = 0;

    // Input nilai genap ke dalam array A
    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[count] = data[i];
            count++;
        }
    }

    // Cetak nilai dalam array A
    printf("Isi array A:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d, ", A[i]);
    }

    return 0;
}
