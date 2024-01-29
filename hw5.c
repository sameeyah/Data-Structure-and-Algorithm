#include <stdio.h>

int FIBO(int a);

int main(void) {

	int i;

	for (i = 1; i <= 42; i++) {
		printf("FIBO(%d)=%d\n", i, FIBO(i));
	}
}

int FIBO(int a) {

	int b;
	
	if(a >= 3) {

		b = FIBO(a - 1) + FIBO(a - 2);
		
	}
	else {
		b = 1;
	}

		return b;
	
}

