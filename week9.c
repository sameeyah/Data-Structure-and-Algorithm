#include <stdio.h>

int a[100] = { 10, 20, 50, 35, 80, 15 };
int size = 6;

int l_srch2(int key);
void l_add2(int key);
void l_del2(int key);

int main(void) {
	int n;

	printf("l_srch2(80) = %d\n", l_srch2(80));

	printf("l_srch2(25) = %d\n", l_srch2(25));

	printf("\n");
	printf("\n");

	for (n = 0; n < size; n++) {
		printf("%d ", a[n]);
	}

	printf("\n");

	l_add2(25);

	for (n = 0; n < size; n++) {
		printf("%d ", a[n]);
	}

	printf("\n");
	printf("\n");

	for (n = 0; n < size; n++) {
		printf("%d ", a[n]);
	}

	printf("\n");

	l_del2(35);

	for (n = 0; n < size; n++) {
		printf("%d ", a[n]);
	}

	return 0;
}

int l_srch2(int key) {
	int i;

	for (i = 0; i < size; i++) {
		if (a[i] == key) {
			return i;
		}
	}

	return -1;
}

void l_add2(int key) {
	int pos;

	pos = l_srch2(key);

	if (pos < 0) {
		a[size] = key;
		size++;
	}

	return;
}

void l_del2(int key) {
	int pos, i;

	pos = l_srch2(key);

	if (pos >= 0) {
		for (i = pos; i < size - 1; i++) {
			a[i] = a[i + 1];
		}
		size--;
	}

	return;
}