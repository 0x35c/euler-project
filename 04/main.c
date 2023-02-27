#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_itoa(int nb);

bool	ispalindromic(int nb)
{
	int		i;
	char	*nb_ascii;

	nb_ascii = ft_itoa(nb);
	i = 0;
	while (i < strlen(nb_ascii) / 2)
	{
		if (nb_ascii[i] != nb_ascii[strlen(nb_ascii) - 1 - i])
			return (false);
		i++;
	}
	return (true);
}

int	main(void)
{
	int	nb1;
	int	nb2;
	int	result;

	nb1 = 0;
	result = 0;
	while (nb1 < 1000)
	{
		nb2 = 0;
		while (nb2 < 1000)
		{
			if (ispalindromic(nb1 * nb2) == true && nb1 * nb2 > result)
			{
				result = nb1 * nb2;
				printf("nb1: %d, nb2: %d, result: %d\n", nb1, nb2, result);
			}
			nb2++;
		}
		nb1++;
	}
	printf("Largest palindromic: %d\n", result);
	return (0);
}
