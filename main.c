#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int test;
	
	srand(time(NULL));
	test = rand() % 10;

	printf("valeure aleatoire de 0 a 10: %d\n", test);


	return 0;
}
