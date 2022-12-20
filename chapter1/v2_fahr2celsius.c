#include <stdio.h>

void main()
{
	
	int fahr;

	// F->C Table heading
	printf("%3s %6s\n", "°F", "°C");

	for (fahr = 0; fahr <= 300; fahr = fahr + 20) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));

	printf("valentino-does'nt-exist\n\n");
	// Ex 1-5, reverse order
	for (fahr = 300; fahr > -20; fahr = fahr - 20) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
	
}