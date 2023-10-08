#include <stdio.h>

int main() {
    // Deklarasi variabel
    char nim[20];
    char nama[50];
    char jurusan[50];
    
    // Input data NIM, NAMA, dan jurusan
    printf("Masukkan NIM: ");
    scanf("%s", nim);
    
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", nama);
    
    printf("Masukkan Jurusan: ");
    scanf(" %[^\n]", jurusan);
    
    // Menampilkan data mahasiswa dengan format yang berbeda
    printf("\nData Mahasiswa:\n");
    printf("====================================\n");
    printf("NIM    : %s\n", nim);
    printf("Nama   : %s\n", nama);
    printf("Jurusan: %s\n", jurusan);
    printf("====================================\n");
    
    return 0;
}


//#include <stdio.h>
//
//int main() {
//    // Deklarasi variabel
//    int nim = 2041018;
//    char nama[] = "Rizky";
//    char jurusan[] = "informatika";
//
//    // Menampilkan data mahasiswa
//    printf("NIM : %d\n", nim);
//    printf("Nama: %s\n", nama);
//    printf("Jurusan: %s\n", jurusan);
//
//    return 0;
//}

