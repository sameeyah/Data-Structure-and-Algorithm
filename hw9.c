#include <stdio.h>

int a[100];
int data[100];
int size = 0;

int l_srch2(int key);
void l_add2(int key, int num);
void l_del2(int key);
void print_table(void);

int main(void) {

	l_add2(10, 1234);
	l_add2(50, 999);
	l_add2(100,100);
	l_add2(30, 54321);
	l_add2(100, 999999);

	printf("key      data\n");
	printf("-------------\n");
	print_table();

	l_del2(200);
	l_del2(50);

	printf("\n");

	printf("key      data\n");
	printf("-------------\n");
	print_table();

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

void l_add2(int key, int num) {
	int pos;

	pos = l_srch2(key);

	if (pos < 0) {
		a[size] = key;
		data[size] = num;
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
			data[i] = data[i + 1];
		}
		size--;
	}

	return;
}

void print_table(void) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%3d    ", a[i]);
		printf("%6d \n",data[i]);
	}
	
	return;
}