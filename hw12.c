#include <stdio.h>

void q_sort2(int x[], int min, int max);
int t, count;

int main(void) {
	int a[10], b[100], c[1000];
	int n;

	printf("配列a(配列サイズ10)\n");

	for (n = 0; n < 10; n++) {
		a[n] = 10 - n;
	}

	t = 0, count = 0;
	q_sort2(a, 0, 9);
	printf("クイックソート\n");
	printf("比較回数 = %d", t);
	printf("\n");
	printf("交換回数 = %d", count);
	printf("\n");
	printf("\n");


	printf("配列b(配列サイズ100)\n");
	
	for (n = 0; n < 100; n++) {
		b[n] = 100 - n;
	}
	
	t = 0, count = 0;
	q_sort2(b, 0, 99);
	printf("クイックソート\n");
	printf("比較回数 = %d", t);
	printf("\n");
	printf("交換回数 = %d", count);
	printf("\n");
	printf("\n");


	printf("配列c(配列サイズ1000)\n");
	
	for (n = 0; n < 1000; n++) {
		c[n] = 1000 - n;
	}
	
	t = 0, count = 0;
	q_sort2(c, 0, 999);
	printf("クイックソート\n");
	printf("比較回数 = %d", t);
	printf("\n");
	printf("交換回数 = %d", count);
	printf("\n");
	printf("\n");

	return 0;

}

void q_sort2(int x[], int min, int max) {
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