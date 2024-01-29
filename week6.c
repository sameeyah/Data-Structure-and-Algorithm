#include <stdio.h>

int FIBO(int a);


int main(void) {

	int n, f;

	for (n = 2; n <= 42; n++) {


		printf("FIBO(%d)=%d\n", n, FIBO(n));
	}

	
}

int FIBO(int a) {

	int fn, fn1, fn2, k;

	if (a >= 3) {

		fn1 = 1;
		fn2 = 1;

		for (k = 3; k <= a; k++) {

			fn = fn2 + fn1;
			fn2 = fn1;
			fn1 = fn;

		}
	}

	else {
		fn = 1;
	}
	
		return fn;
	
}