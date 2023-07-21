/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <stdio.h>

int	check_and_sum(int n)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < n)
	{
		if ((i % 5 == 0 && i % 3 == 0) || i % 5 == 0 || i % 3 == 0)
			res += i;
		i++;
	}
	return (res);
}

int	main(void)
{
	int	x;
	
	x = check_and_sum(1000);
	printf("Result: %i\n", x);
	return (0);
}
