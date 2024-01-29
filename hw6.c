#include <stdio.h>

void hanoi(int n, int i, int j);
int count = 0;

int main(void) {

	int a;

	printf("�����H");
	scanf("%d", &a);

	hanoi(a, 0, 2);

	printf("���v%d��̃f�B�X�N�ړ����s���܂���\n", count);
}

void hanoi(int n, int i, int j) {

	int k;

	if (n >= 2) {

		k = 3 - i - j;

		hanoi(n - 1, i, k);
		printf("%d����%d��1���ړ�\n", i, j);
		count++;
		hanoi(n - 1, k, j);

	}

	else if (n == 1) {

		printf("%d����%d��1���ړ�\n", i, j);
		count++;

	}

	return;

}