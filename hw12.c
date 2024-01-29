#include <stdio.h>

void q_sort2(int x[], int min, int max);
int t, count;

int main(void) {
	int a[10], b[100], c[1000];
	int n;

	printf("�z��a(�z��T�C�Y10)\n");

	for (n = 0; n < 10; n++) {
		a[n] = 10 - n;
	}

	t = 0, count = 0;
	q_sort2(a, 0, 9);
	printf("�N�C�b�N�\�[�g\n");
	printf("��r�� = %d", t);
	printf("\n");
	printf("������ = %d", count);
	printf("\n");
	printf("\n");


	printf("�z��b(�z��T�C�Y100)\n");
	
	for (n = 0; n < 100; n++) {
		b[n] = 100 - n;
	}
	
	t = 0, count = 0;
	q_sort2(b, 0, 99);
	printf("�N�C�b�N�\�[�g\n");
	printf("��r�� = %d", t);
	printf("\n");
	printf("������ = %d", count);
	printf("\n");
	printf("\n");


	printf("�z��c(�z��T�C�Y1000)\n");
	
	for (n = 0; n < 1000; n++) {
		c[n] = 1000 - n;
	}
	
	t = 0, count = 0;
	q_sort2(c, 0, 999);
	printf("�N�C�b�N�\�[�g\n");
	printf("��r�� = %d", t);
	printf("\n");
	printf("������ = %d", count);
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