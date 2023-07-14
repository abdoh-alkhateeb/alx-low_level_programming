#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
	int n;
	char *msg;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
		msg = "greater than 5";
	else if (d == 0)
		msg = "0";
	else
		msg = "less than 6 and not 0";

	printf("Last digit of %d is %d and is %s\n", n, d, msg);

	return (0);
}
