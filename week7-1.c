#include <stdio.h>

int prime(int m);

int main(void) {

	int n, m, kekka;

	scanf("%d", &n);
	//printf("%d\n", n);

	for (m = 2; m <= n; m++) {
		kekka = prime(m);

		if (kekka == 1) {
			printf("%d‚Í‘f”\n", m);
		}
	}
	
	return 0;
}

int prime(int m) {
	int k, i;
	k = m / 2;

	for (i = 2; i <= k; i++) {
		if (m % i == 0) {
			return 0;
		}
	}

	return 1;

}