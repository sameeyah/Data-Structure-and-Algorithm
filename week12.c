#include <stdio.h>

void q_sort2(int x[], int min, int max);

int main(void) {
	int a[5] = { 9, 8, 4, 6, 3 };
	int b[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n;

	printf("”z—ña\n");
	q_sort2(a, 0, 4);

	for (n = 0; n < 5; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");


	printf("”z—ñb\n");
	q_sort2(b, 0, 9);

	for (n = 0; n < 10; n++) {
		printf(" %d", b[n]);
	}
	printf("\n");

	return 0;


}

void q_sort2(int x[], int min, int max){
	int mid, key, i, j, tmp;

	if (min < max) {
		mid = (min + max) / 2;
		key = x[mid];

		i = min;
		j = max;

		do {
			while (x[i] < key)
				i++;

			while (x[j] > key)
				j--;

			if (i <= j) {
				tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
				i++;
				j--;
			}
		} while (i <= j);

		q_sort2(x, min, j);
		q_sort2(x, i, max);
	}

	return;
}