// Mendeklarasikan header file.
#include <stdio.h>
#include <unistd.h>

// Menginisialisasi array ketebalan dan waktu_pengelasan.
int ketebalan[] = {6, 8, 12, 24, 30, 36, 42, 49, 50};
int jumlah_ketebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);
int waktu_pengelasan[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// fungsi hitung_tengah untuk menghitung nilai tengah dari array waktu_pengelasan.
int hitung_tengah(int array[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total / size;
}

// fungsi proses_pengelasan yang mensimulasikan proses pengelasan untuk setiap ketebalan.
void proses_pengelasan(int ketebalan) {
    printf("Proses pengelasan untuk ketebalan %d mm\n", ketebalan);
    // Implementasi proses pengelasan sesuai dengan spesifikasi
    printf("Pengelasan selesai untuk ketebalan %d mm.\n", ketebalan);
}

// Memulai program dengan pesan bahwa tombol Start ditekan dan motor listrik utama aktif.
int main() {
    printf("Tombol Start ditekan, motor listrik utama aktif.\n");

    // Melakukan perulangan untuk mengklasifikasikan pengelasan dari ketebalan terkecil hingga terbesar.
    for (int i = 0; i < jumlah_ketebalan; i++) {
        printf("\nKlasifikasi pengelasan untuk ketebalan %d mm\n", ketebalan[i]);

        // Menghitung nilai tengah array waktu_pengelasan.
        int nilai_tengah = hitung_tengah(waktu_pengelasan, jumlah_ketebalan);

        // Memberikan pesan simulasi bahwa motor listrik utama berputar dan berpindah pada nilai tengah.
        printf("Motor listrik utama berputar dan berpindah pada nilai tengah %d detik.\n", nilai_tengah);

        // Memberikan pesan bahwa motor listrik lengan tungkai aktif dan berputar 45 derajat.
        printf("Motor listrik lengan tungkai aktif dan berputar 45 derajat.\n");

        // Memberikan pesan bahwa motor listrik jari robot berputar mendekati objek yang akan dilas.
        printf("Motor listrik jari robot berputar mendekati objek yang akan dilas.\n");

        // Menggunakan switch untuk menentukan waktu pengelasan
        switch (ketebalan[i]) {
            case 6:
                proses_pengelasan(ketebalan[i]);
                break;
            case 8:
                proses_pengelasan(ketebalan[i]);
                break;
            case 12:
                proses_pengelasan(ketebalan[i]);
                break;
            case 24:
                proses_pengelasan(ketebalan[i]);
                break;
            case 30:
                proses_pengelasan(ketebalan[i]);
                break;
            case 36:
                proses_pengelasan(ketebalan[i]);
                break;
            case 42:
                proses_pengelasan(ketebalan[i]);
                break;
            case 49:
                proses_pengelasan(ketebalan[i]);
                break;
            case 50:
                proses_pengelasan(ketebalan[i]);
                break;
            default:
                printf("Ketebalan tidak terdefinisi.\n");
        }
        
        //Timer delay 1 detik
        sleep(1);

        // Proses berulang ke langkah klasifikasi berikutnya
    }

    return 0;
}
