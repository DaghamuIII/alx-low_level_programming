#include <stdlib.h>

#include <time.h>

/**
* main -starting point
* Description -prints wheather random number is positive or negative
* Return: 0(success)
*/

int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf(0 + " is zero\n");
	else
		printf("%d is positive\n", n);
	return (0);
}
