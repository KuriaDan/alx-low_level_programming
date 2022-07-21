#include "main.h"
/**
  * is_prime_number - func to return 1 if number is prime or 0 if not.
  * @n: input
  * Return: 0
  */
int is_prime_number(int n)
{
	return (helper_prime(n, 2, n / 2));
}
/**
  * helper_prime - helper function
  * @n: input number
  * @i: increment variable
  * @limit: stop
  * Return: 1 or 0
  */
int helper_prime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= limit)
		return (helper_prime(n, i + 1, limit));
	else
		return (1)
}
