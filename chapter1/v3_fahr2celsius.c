#include <stdio.h>

#define	LOWER	 0 		/* lower limit of temperature table */
#define	UPPER	 300 	/* upper limit */
#define	STEP	 20 	/* step size */
	
void main()
{
	
	int fahr;

	// F->C Table heading
	printf("%3s %6s\n", "°F", "°C");

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));

	
}