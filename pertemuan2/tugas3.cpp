#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas = 4.0;
    double sisi_tinggi = 5.0;
    double sisi_miring;

    sisi_miring = sqrt(pow(sisi_alas, 2) + pow(sisi_tinggi, 2));

    printf("Panjang sisi miring segitiga adalah: %lf cm\n", sisi_miring);

    return 0;
}
