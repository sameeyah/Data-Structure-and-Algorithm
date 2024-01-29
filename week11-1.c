#include <stdio.h>

void s_sort(int x[], int size);

int main(void) {
	int a[5] = { 60, 50, 40, 30, 20 };
	int b[8] = { 80, 70, 60, 50, 40, 30, 20, 10 };
	int n;

	printf("”z—ña\n");
	s_sort(a, 5);

	for (n = 0; n < 5; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");


	printf("”z—ñb\n");
	s_sort(b, 8);

	for (n = 0; n < 8; n++) {
		printf(" %d", b[n]);
	}
	printf("\n");

	return 0;

}

void s_sort(int x[], int size) {
	int i, j, tmp, min;

	for (j = 0; j <= size - 2; j++) {
		min = j;

		for (i = j + 1; i <= size - 1; i++) {
			if (x[i] < x[min])
				min = i;
		}

		if (min != j) {
				tmp = x[j];
				x[j] = x[min];
				x[min] = tmp;
		}
	}

	return;
}