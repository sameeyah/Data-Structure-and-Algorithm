#include <stdio.h>

int FIBO(int a);

int n;

int main(void) {

	int i;

	for (i = 1; i <= 42; i++) {
		n = 0;
		printf("FIBO(%d)=%d\n", i, FIBO(i));
		printf("�Ăяo���ꂽ�񐔂�%d�ł�\n", n);
	}
}

int FIBO(int a) {

	int b;
	n++;

	if(a >= 3) {

		b = FIBO(a - 1) + FIBO(a - 2);
		
	}
	else {
		b = 1;
	}

		return b;
	
}

