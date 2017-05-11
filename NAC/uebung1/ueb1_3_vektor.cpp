#include <math.h>
#include <stdio.h>

#define BETRAG(x, y) sqrt(pow((x), 2) + pow((y), 2))

int main(int argc, char* argv[])
{
	printf("1. %f\n", BETRAG(3, 4));
	printf("2. %f\n", BETRAG(1 + 3, 2 + 1));

	for (;;);

	return 0;
}

/*
Aufgabe d)

-c		kompilieren (nicht linken)
-E		nur Präprozessor

*/
