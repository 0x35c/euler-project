#include <stdio.h>

int main(int ac, char **av) {
	(void)ac;
	char *number = av[1];
	long result = 0;
	long tmp = 1;

	for (int i = 0; number[i + 13]; ++i) {
		for (int j = i; j < i + 13; ++j)
			tmp *= number[j] - '0';
		if (tmp > result)
			result = tmp;
		tmp = 1;
	}
	printf("%ld\n", result);
	return (0);
}
