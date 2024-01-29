#include <stdio.h>

int main(void) {
	int a, b, max, min, rem;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b) {
		max = a; min = b;
	}
	else {
		max = b; min = a;
	}

	while (max % min != 0) {
		rem = max % min;
		max = min;
		min = rem;
	}

	printf("Å‘åŒö–ñ”=%d\n", min);

	return 0;
}