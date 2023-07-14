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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		msg = "positive";
	else if (n < 0)
		msg = "negative";
	else
		msg = "zero";

	printf("%d is %s\n", n, msg);

	return (0);
}
