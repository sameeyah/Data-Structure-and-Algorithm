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
	printf("�ő�l��%d�ł��B\n", max);

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

	printf("man1��age��%d�ł��B\n", man1.age);
	printf("man1��weight��%lf�ł��B\n", man1.weight);
	printf("man1��height��%lf�ł��B\n", man1.height);

	printf("\n");

	printf("man2��age��%d�ł��B\n", man2.age);
	printf("man2��weight��%lf�ł��B\n", man2.weight);
	printf("man2��height��%lf�ł��B\n", man2.height);

	return 0;
}