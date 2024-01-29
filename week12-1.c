#include <stdio.h>

void q_sort2(int x[], int min, int max);
int t, count;

int main(void) {
	int a[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int b[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 };
	int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };
	int n;

	printf("”z—ña\n");
	t = 0, count = 0;
	q_sort2(a, 0, 9);

	for (n = 0; n < 10; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");
	printf("”äŠr‰ñ” = %d", t);
	printf("\n");
	printf("ŒðŠ·‰ñ” = %d", count);
	printf("\n");
	printf("\n");
	

	printf("”z—ñb\n");
	t = 0, count = 0;
	q_sort2(b, 0, 9);

	for (n = 0; n < 10; n++) {
		printf(" %d", b[n]);
	}
	printf("\n");
	printf("”äŠr‰ñ” = %d", t);
	printf("\n");
	printf("ŒðŠ·‰ñ” = %d", count);
	printf("\n");
	printf("\n");


	printf("”z—ñc\n");
	t = 0, count = 0;
	q_sort2(c, 0, 9);

	for (n = 0; n < 10; n++) {
		printf(" %d", c[n]);
	}
	printf("\n");
	printf("”äŠr‰ñ” = %d", t);
	printf("\n");
	printf("ŒðŠ·‰ñ” = %d", count);
	printf("\n");
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
			while (x[i] < key) {
				t++;
				i++;
			}
			t++;

			while (x[j] > key) {
				t++;
				j--;
			}
			t++;

			if (i <= j) {
				count++;
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