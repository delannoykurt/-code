#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// exercise of random values 

int main(void)
{
	puts("the new random values");

	float test;
	
	srand(time(NULL));

	test = ((float) rand() / RAND_MAX);
	printf("values between 0 and 1, %.2f\n", test);

	test = ((float) rand() / RAND_MAX  * 10);
	printf("values between 0 and 10, %.2f\n", test);

	test = ((float) rand() / RAND_MAX * 50);
	printf("values between 0 and 50, %.2f\n", test);


	return 0;
}

