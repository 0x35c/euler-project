#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 1;
	while (1)
	{
		for (int i = 1; i < 21; i++)
		{
			if (nb % i)
				break ;
			if (i == 20)
			{
				printf("The number is: %d\n", nb);
				return (1);
			}
		}
		nb++;
	}
	return (0);
}
