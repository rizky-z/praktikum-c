#include <stdio.h>
#include <string.h>

int main ()
{
	char nim[10];
	char nama[20];
	int kehadiran, tugas, uts, uas;
	float nilai_akhir;
	
	strcpy(nim, "2041018");
	strcpy(nama, "Rizky");
	kehadiran = 100;
	tugas = 90;
	uts = 80;
	uas = 80;
	
	nilai_akhir = (0.1 * kehadiran) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);
	
	printf("NIM \t: %s", nim);
	printf("\nNama \t: %s", nama);
	printf("\nKehadiran \t: %i", kehadiran);
	printf("\nTugas \t: %i", tugas);
	printf("\nUTS \t: %i", uts);
	printf("\nUAS \t: %i", uas);
	printf("\nNilai Akhir \t: %.2f", nilai_akhir);
	
	return 0;
}
