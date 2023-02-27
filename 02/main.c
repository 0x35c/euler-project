#include <stdio.h>

int	main(void)
{
	int	prev_nb;
	int	cur_nb;
	int	sum;

	cur_nb = 2;
	prev_nb = 1;
	sum = 0;
	while (cur_nb < 4000000)
	{
		if (cur_nb % 2 == 0)
			sum += cur_nb;
		cur_nb += prev_nb;
		prev_nb = cur_nb - prev_nb;
	}
	printf("Final sum of even values: %d\n", sum);
}
