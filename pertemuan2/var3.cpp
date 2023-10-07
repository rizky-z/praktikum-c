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
	
	printf("NIM   : %s \n", nim);
	printf("Nama  : %s \n", nama);
	printf("Nilai : %i \n", nilai);
	
	return 0;
}
