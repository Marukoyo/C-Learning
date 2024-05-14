#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Size of int : %zu byte(s)\n", sizeof(int));

	// size_t is an unsigned integer type 
	// %zu is a format specifier for size_t

	printf("Size of short : %zu byte(s)\n", sizeof(short));

	printf("Size of long : %zu byte(s)\n", sizeof(long));

	printf("Size of long long : %zu byte(s)\n", sizeof(long long));

	printf("Size of double : %zu byte(s)\n", sizeof(double));

	printf("Size of long double : %zu byte(s)\n", sizeof(long double));

	printf("Size of char : %zu byte(s)\n", sizeof(char));

	printf("Size of float : %zu byte(s)\n", sizeof(float));

	system("pause");
	return 0;
}