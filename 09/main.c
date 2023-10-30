#include <stdio.h>

int main(void) {
	for (int a = 1;	a < 998; ++a) {
		for (int b = 1;	b < 998; ++b) {
			for (int c = 1;	c < 998; ++c) {
				if (a * a + b * b == c * c && a + b + c == 1000) {
					printf("%d\n", a * b * c);
					goto end;
				}
			}
		}
	}
end:
	return (0);
}
