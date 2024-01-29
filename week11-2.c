#include <stdio.h>

void i_sort(int x[], int size);

int main(void) {
	int a[5] = { 60, 50, 40, 30, 20 };
	int b[8] = { 80, 70, 60, 50, 40, 30, 20, 10 };
	int n;

	printf("”z—ña\n");
	i_sort(a, 5);

	for (n = 0; n < 5; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");


	printf("”z—ñb\n");
	i_sort(b, 8);

	for (n = 0; n < 8; n++) {
		printf(" %d", b[n]);
	}
	printf("\n");

	return 0;

}

void i_sort(int x[], int size) {
	int i, j, tmp;

	for (j = 1; j <= size - 1; j++) {
		for (i = j; i >= 1; i--) {
			if (x[i-1] > x[i]) {
				tmp = x[i];
				x[i] = x[i - 1];
				x[i - 1] = tmp;
			}
			else {
				break;
			}
		}
	}

	return;
}