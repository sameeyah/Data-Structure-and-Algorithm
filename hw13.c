#include <stdio.h>
#include <ctype.h>

#define M 20
#define N 3

char text[1000] = "SHE SELLS SEA SHELLS";
char key[100] = "sea";

int sp_match1(void);
int SHOUGOU(int i);

int main(void) {
	printf("%d\n", sp_match1());

	return 0;
}

int sp_match1(void) {
	int i, kekka = 0;

	for (i = 0; i <= M - N; i++) {
		kekka = SHOUGOU(i);

		if (kekka == 1) {
			return i;
		}
	}

	return -1;
}

int SHOUGOU(int i) {
	int j;

	for (j = 0; j <= N - 1; j++) {
		if (tolower(text[i + j]) != tolower(key[j])) {
			return -1;
		}
	}

	return 1;
}