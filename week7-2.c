#include <stdio.h>

int prime(int m);

int main(void) {

	int n, m, kekka;
	n = 0;

	for (m = 3000000; m >= 2; m--) {
		kekka = prime(m);

		if (kekka == 1) {
			printf("%d‚Í‘f”\n", m);
			n = n + 1;

			if (n >= 20) {
				break;
			}		
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