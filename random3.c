#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Exercice random values between min and max values



#define MINV 20
#define MAXV 30

int main(void)
{
	puts("values random between min and max value");

	float test;

	srand(time(NULL));

	test = MINV + ((float) rand() / RAND_MAX) * MAXV;
	printf("value random: [%d - %d] = %.2f\n", MINV, MAXV, test);
	


	return 0;
}
