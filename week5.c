#include <stdio.h>

int FACT(int a);

int main(void) {

	int n, r, x, y, z, ans;

	scanf("%d", &n);
	scanf("%d", &r);

	x = FACT(n);
	y = FACT(r);
	z = FACT(n - r);
	ans = x / y / z;

	printf("%d’Ê‚è‚Å‚·\n", ans);
}

int FACT(int a) {

	int b, p;

	b = 1;
	
	for (p = 2; p <= a; p++) {

		b = b * p;

	}

		return b;
	
}