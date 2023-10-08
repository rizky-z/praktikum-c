#include <stdio.h>

int main() {
    double suhu_celcius;
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%lf", &suhu_celcius);

    double suhu_fahrenheit = (suhu_celcius * 9 / 5) + 32;
    double suhu_reamur = suhu_celcius * 4 / 5;

    printf("Suhu dalam Fahrenheit: %.2lf derajat\n", suhu_fahrenheit);
    printf("Suhu dalam Reamur: %.2lf derajat\n", suhu_reamur);

    return 0;
}

