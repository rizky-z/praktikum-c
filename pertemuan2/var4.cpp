#include <stdio.h>
#include <string.h>

int main ()
{
	char nim[10];
	char nama[20];
	int nilai;
	
	strcpy(nim, "2041018");
	strcpy(nama, "Rizky");
	nilai = 90;
	
	printf("NIM \t: %s", nim);
	printf("\nNama \t: %s", nama);
	printf("\nNilai \t: %i", nilai);
	
	return 0;
}
