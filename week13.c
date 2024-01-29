#include <stdio.h>

#define M 20
#define N 3

char text[1000] = "SHE SELLS SEA SHELLS";
char key[100] = "SEA";

int sp_match1(void);

int main(void) {
	printf("%d\n", sp_match1());

	return 0;
}

int sp_match1(void) {
	int i, j;

	for (i = 0; i <= M - N; i++) {
		for (j = 0; j <= N - 1; j++) {
			if (text[i + j] != key[j]) {
				break;
			}
		}

		if (j == N) {
			return i;
		}
	}

	return -1;
}