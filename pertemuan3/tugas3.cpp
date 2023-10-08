#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas, sisi_tinggi;
    printf("Masukkan panjang sisi alas (cm): ");
    scanf("%lf", &sisi_alas);
    printf("Masukkan panjang sisi tinggi (cm): ");
    scanf("%lf", &sisi_tinggi);

    double sisi_miring = sqrt(pow(sisi_alas, 2) + pow(sisi_tinggi, 2));

    printf("Panjang sisi miring segitiga adalah: %.2lf cm\n", sisi_miring);

    return 0;
}

