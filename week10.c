#include <stdio.h>

int a[100] = { 10, 20, 25, 30, 50, 55, 70, 80, 85, 90, 95, 100 };
int size = 12;

int b_srch(int key);
void b_add(int key);
void b_del(int key);

int main(void) {
	int pos, n;

	for (n = 0; n < size; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");

	pos = b_srch(70);
	printf("b_srch(70) = %d\n", pos);

	pos = b_srch(75);
	printf("b_srch(75) = %d\n", pos);

	printf(" ‘}“üˆÊ’u = %d\n", - pos - 1);

	b_add(75);

	for (n = 0; n < size; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");

	b_del(70);

	for (n = 0; n < size; n++) {
		printf(" %d", a[n]);
	}
	printf("\n");

	return 0;
}

int b_srch(int key) {
	int min, max, mid;

	min = 0;
	max = size - 1;

	while (min <= max) {
		mid = (min + max) / 2;

		if (a[mid] == key)
			return mid;
		else if (a[mid] > key)
			max = mid - 1;
		else
			min = mid + 1;
	}
	return -min - 1;
}

void b_add(int key) {
	int pos, newpos, i;

	pos = b_srch(key);

	if (pos < 0) {
		newpos = -pos - 1;

		for (i = size; i > newpos; i--) {
			a[i] = a[i - 1];
		}

		a[newpos] = key;
		size++;
	}
	return;
}

void b_del(int key) {
	int pos, i;

	pos = b_srch(key);

	if (pos >= 0) {
		for (i = pos; i < size - 1; i++) {
			a[i] = a[i + 1];
		}

		size--;
	}
	return;
}