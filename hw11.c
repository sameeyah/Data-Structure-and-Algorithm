#include <stdio.h>

void s_sort(int x[], int size);
void b_sort(int x[], int size);
void i_sort(int x[], int size);

int main(void) {
	int a1[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int b1[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 };
	int c1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };

	int a2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int b2[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 };
	int c2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };

	int a3[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int b3[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 };
	int c3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };

	//a
	printf("選択ソート（配列a）\n");
	s_sort(a1, 10);
	printf("バブルソート（配列a）\n");
	b_sort(a2, 10);
	printf("挿入ソート（配列a）\n");
	i_sort(a3, 10);
	printf("\n");

	//b
	printf("選択ソート（配列b）\n");
	s_sort(b1, 10);
	printf("バブルソート（配列b）\n");
	b_sort(b2, 10);
	printf("挿入ソート（配列b）\n");
	i_sort(b3, 10);
	printf("\n");

	//c
	printf("選択ソート（配列c）\n");
	s_sort(c1, 10);
	printf("バブルソート（配列c）\n");
	b_sort(c2, 10);
	printf("挿入ソート（配列c）\n");
	i_sort(c3, 10);
	printf("\n");

	return 0;

}

void s_sort(int x[], int size) {
	int i, j, tmp, min, count = 0, t = 0;

	for (j = 0; j <= size - 2; j++) {
		min = j;
		

		for (i = j + 1; i <= size - 1; i++) {
			t++;
			if (x[i] < x[min])
				min = i;
		}
		
		if (min != j) {
			count++;
			tmp = x[j];
			x[j] = x[min];
			x[min] = tmp;
			
		}
	}

	printf("比較回数 = %d", t);
	printf("\n");
	printf("交換回数 = %d", count);
	printf("\n");

	return;
}

void b_sort(int x[], int size) {
	int i, j, tmp, s = 0, r = 0;

	for (j = 0; j <= size - 2; j++) {
		for (i = size - 2; i >= j; i--) {
			s++;
			if (x[i] > x[i + 1]) {
				r++;
				tmp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = tmp;
			}
		}
	}

	printf("比較回数 = %d", s);
	printf("\n");
	printf("交換回数 = %d", r);
	printf("\n");

	return;
}

void i_sort(int x[], int size) {
	int i, j, tmp, k = 0, p = 0;

	for (j = 1; j <= size - 1; j++) {
		for (i = j; i >= 1; i--) {
			k++;
			if (x[i - 1] > x[i]) {
				p++;
				tmp = x[i];
				x[i] = x[i - 1];
				x[i - 1] = tmp;
			}
			else {
				break;
			}
		}
	}

	printf("比較回数 = %d", k);
	printf("\n");
	printf("交換回数 = %d", p);
	printf("\n");

	return;
}