#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi;
    printf("Masukkan panjang alas (cm): ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi (cm): ");
    scanf("%lf", &tinggi);

    double luas = 0.5 * alas * tinggi;
    double sisi_a, sisi_b, sisi_c, keliling;

    printf("Luas segitiga adalah: %.2lf cm^2\n", luas);

    sisi_c = sqrt(pow(alas, 2) + pow(tinggi, 2));
    keliling = alas + tinggi + sisi_c;

    printf("Keliling segitiga adalah: %.2lf cm\n", keliling);

    return 0;
}

