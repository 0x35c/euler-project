#include <stdio.h>

int	main(void)
{
	int	sumOfSquare = 0;
	int	squareOfSum;
	int	sum = 0;
	int	result;
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		sumOfSquare += nb * nb;
		sum += nb;
		nb++;
	}
	squareOfSum = sum * sum;
	result = squareOfSum - sumOfSquare;
	printf("The result is: %d\n", result);
}
