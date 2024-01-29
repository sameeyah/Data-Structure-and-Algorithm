#include <stdio.h>

int main(void) {

	int a[5] = {10, 20, 30, 40, 50};
	int max, i, j, w;

	max = 0;

	for (j = 0; j <= 4; j++) {
		printf("%d ", a[j]);
	}

	printf("\n");

	for (j = 0; j <= 3; j++) {
		max = j;

		for (i = j + 1; i <= 4; i++) {
			if (a[max] < a[i]) {
				max = i;
			}
		}

		w = a[j];
		a[j] = a[max];
		a[max] = w;

	}

	for (j = 0; j <= 4; j++) {
		printf("%d ", a[j]);
	}

	printf("\n");

	return 0;
	
}