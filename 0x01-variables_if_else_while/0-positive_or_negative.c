#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/** main - assigns a random number to a variableeach time it's executed
  * and prints whether the number stored in the variable is positive, negative, or zero.
  * Return: 0
  */

int main(void)
{
	int n;
	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
