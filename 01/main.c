#include <stdio.h>

int	main(void)
{
	int	i;
	int	sum;

	i = 1;
	sum = 0;
	while (i < 1000)
	{
		if (i % 15 == 0)
			sum += i;
		else
		{
			if (i % 3 == 0)
				sum += i;
			if (i % 5 == 0)
				sum += i;
		}
		i++;
	}
	printf("Final sum: %d\n", sum);
	return (0);
}
