#include <stdio.h>

int main()
{
	int N;
	printf("input bilangan : ");
	scanf("%i", &N);
	
	if (N > 50) {
		N = N + 10;
		printf("%i", N);
	} else {
		N = N - 25;
		N = N + 10;
		printf("%i", N);
	}
	printf("\n\nProgram Selesai.");
	return 0;
}
