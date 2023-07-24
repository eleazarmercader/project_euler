/* The prime factors of $13195$ are $5, 7, 13$ and $29$.
 * What is the largest prime factor of the number $600851475143$? */

#include <stdio.h>

long	largest_prime_factor(long n)
{
	long	latestDivisor;
	long	quotient;
	long	divisor;

	latestDivisor = 1;
	quotient = n;
	while (quotient % 2 == 0)
	{
		latestDivisor = 2;
		quotient /= 2;
		printf("Se ha dividido por 2\n");
	}
	divisor = 3;
	while (quotient > 1)
	{
		while (quotient % divisor == 0)
		{
			quotient /= divisor;
			latestDivisor = divisor;
			printf("Se ha dividido por %li\n", divisor);
		}
		divisor += 2;
	}
	return (latestDivisor);
}

int	main(void)
{
	long	x;

	x = largest_prime_factor(600851475143);
	printf("Solution: %ld\n", x);
	return (0);
}
