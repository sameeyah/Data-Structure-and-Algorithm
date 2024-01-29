#include <stdio.h>

void b_sort(int x[], int size);

int main(void) {
	int a[5] = { 60, 50, 40, 30, 20 };
	int b[8] = { 80, 70, 60, 50, 40, 30, 20, 10 };
	int n;

	printf("”z—ña\n");
	b_sort(a, 5);

	for (n = 0; n < 5; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");


	printf("”z—ñb\n");
	b_sort(b, 8);

	for (n = 0; n < 8; n++) {
		printf(" %d", b[n]);
	}
	printf("\n");

	return 0;

}

void b_sort(int x[], int size) {
	int i, j, tmp;

	for (j = 0; j <= size - 2; j++) {
		for (i = size - 2; i >= j; i--) {
			if (x[i] > x[i+1]) {
				tmp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = tmp;
			}
		}
	}

	return;
}