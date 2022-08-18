/**
 *flip_bits - returns the number of bits you would need to flip to get from one number to another
 *@n: number to flip
 *@m: number to flip into
 *Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;

	count = 0;
	for (i = 0; i <= (sizeof(unsigned long int) * 8); i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		m >>= 1;
		n >>= 1;
	}
	return (count);
}
