#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define NUMBER 600851475143
#define MAX_ITER 775146

bool	isprime(long nb)
{
	long	i;

	i = 4;
	while (i < sqrtl((long double)nb))
	{
		if (nb % i == 0)
			return (false);
		i++;
	}
	return (true);
}

int	main(void)
{
	long	nb;
	long	result;

	nb = 3;
	result = 0;
	while (nb < MAX_ITER)
	{
		if (isprime(nb) == true && NUMBER % nb == 0)
			result = nb;
		nb += 2;
	}
	printf("Largest prime factor: %ld\n", result);
}
