#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * return: always 0 (sucesses)
 */
int main(void)
{
	int n;

	srand(time(0);
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf(" %d the last digit is greater than 5\n" . n);
	if (n == 0)
		printf("%d the last digit is 0\n" . n);
	if (n < 6  && n != 0)
		printf(" %d the last digit is less than 6 and not 0\n" . n);
	return (0);
}

