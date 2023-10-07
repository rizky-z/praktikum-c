#include <stdio.h>

int main()
{
	int bilangan;
	printf("input bilangan : ");
	scanf("%i", &bilangan);
	
	if (bilangan < 0) {
		printf("\nBilangan yagn dimasukan bukan bilangan bulat positif");
	} else {
		if(bilangan % 2 == 0) {
			printf("\nGenap");
		} else {
			printf("\nGanjil");
		}
	}
	printf("\n\nProgram Selesai.");
	return 0;
}
