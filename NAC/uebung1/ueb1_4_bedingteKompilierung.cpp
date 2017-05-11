#include <math.h>
#include <stdio.h>

#ifdef LEET
	#define BETRAG(x, y) sqrt(pow((x), 2) + pow((y), 2))
#else
	#define BETRAG(x, y) sqrt(pow(x, 2) + pow(y, 2))
#endif


int main(int argc, char* argv[])
{
	printf("1. %f\n", BETRAG(3, 4));
	printf("2. %f\n", BETRAG(1 + 3, 2 + 1));

	for (;;);

	return 0;
}
