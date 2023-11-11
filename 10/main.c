#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <errno.h>

#define ERR(str) errno = EINVAL;\
					perror(str);\
					return (EXIT_FAILURE);

bool ft_isprime(int nb) {
	if (nb == 1)
		return (false);
	if (nb == 2)
		return (true);
	for (int i = 2; i < sqrt(nb) + 1; ++i) {
		if (nb % i == 0)
			return (false);
	}
	return (true);
}

int main(int ac, char **av) {
	long result = 0;
	int nb = 0;

	if (ac != 2) {
		ERR("Wrong number of args");
	}
	nb = atoi(av[1]);
	if (nb > 2000000) {
		ERR("Number too large");
	}
	for (int i = 0; i < nb; ++i) {
		if (ft_isprime(i))
			result += i;
	}
	printf("result: %ld\n", result);
	return (EXIT_SUCCESS);
}
