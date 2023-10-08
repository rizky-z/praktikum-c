#include <stdio.h>

int main() {
    // Deklarasi variabel
    double panjang = 10.0; // Panjang dalam cm
    double lebar = 7.0;   // Lebar dalam cm
    double luas;

    // Menghitung luas persegi panjang
    luas = panjang * lebar;

    // Menampilkan hasil
    printf("Luas persegi panjang dengan panjang %.2f cm dan lebar %.2f cm adalah %.2f cm^2\n", panjang, lebar, luas);

    return 0;
}

//#include <stdio.h>
//int main() {
//	
//	int P, L, T;
//	P = 10.0;
//	L = 7.0;
//	T = P * L;
//	printf("Luas persegi panjang adalah %i cm", T);
//	
//	return 0;
//}
