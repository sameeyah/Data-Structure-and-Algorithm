#include <stdio.h>

/*int main(void) {
	int max = 0;
	int i;
	int a[10] = { 3, 13, 2, 28, 3, 14, 5, 29, 7, 11 };

	for (i = 1; i <= 9; i++) {
		if (a[i] > max) {
			max = a[i];
		}		
	}
	printf("最大値は%dです。\n", max);

	return 0;
}
*/

typedef struct GAKUSEI {
	int age;
	double weight, height;
}GAKUSEI;

int main(void) {

	GAKUSEI man1, man2;

	man1.age = 22;
	man1.weight = 65.9;
	man1.height = 173.5;

	man2.age = man1.age;
	man2.weight = man1.weight * 1.1;
	man2.height = man1.height;

	printf("man1のageは%dです。\n", man1.age);
	printf("man1のweightは%lfです。\n", man1.weight);
	printf("man1のheightは%lfです。\n", man1.height);

	printf("\n");

	printf("man2のageは%dです。\n", man2.age);
	printf("man2のweightは%lfです。\n", man2.weight);
	printf("man2のheightは%lfです。\n", man2.height);

	return 0;
}