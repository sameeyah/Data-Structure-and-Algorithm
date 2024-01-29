#include <stdio.h>

void hanoi(int n, int i, int j);


int main(void) {

	int a;

	printf("枚数？");
	scanf("%d", &a);

	hanoi(a, 0, 2);
	
}

void hanoi(int n, int i, int j){

	int k;

	if (n >= 2) {

		k = 3 - i - j;

		hanoi(n - 1, i, k);
		printf("%dから%dに1枚移動\n", i, j);
		hanoi(n - 1, k, j);

	}

	else if (n == 1) {

		printf("%dから%dに1枚移動\n", i, j);

	}
	
		return ;
	
}