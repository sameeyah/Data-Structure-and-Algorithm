#include <stdio.h>

int a[100];
int data[100];
int size = 0;

int b_srch(int key);
void b_add(int key, int num);
void b_del(int key);
void print_table(void);

int main(void) {

	int pos;

	b_add(10, 1234);
	b_add(50, 999);
	b_add(100,100);
	b_add(30, 54321);
	b_add(100, 999999);

	printf("key      data\n");
	printf("-------------\n");
	print_table();

	b_del(200);
	b_del(50);

	printf("\n");

	printf("key      data\n");
	printf("-------------\n");
	print_table();

	printf("\n");

	pos = b_srch(100);
	printf("キー100のレコードの位置は %d\n", pos);
	if (pos < 0) {
		printf("               挿入位置は %d\n", -pos - 1);
	}
	
	pos = b_srch(20);
	printf("キー 20のレコードの位置は %d\n", pos);
	if (pos < 0) {
		printf("               挿入位置は %d\n", -pos - 1);
	}

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

void b_add(int key, int num) {
	int pos, newpos, i;

	pos = b_srch(key);

	if (pos < 0) {
		newpos = -pos - 1;

		for (i = size; i > newpos; i--) {
			a[i] = a[i - 1];
			data[i] = data[i - 1];
		}

		a[newpos] = key;
		data[newpos] = num;
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