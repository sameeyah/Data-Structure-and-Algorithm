#include <stdio.h>

struct GAKUSEI {
	int age;
	double weight, height;
};

int main(void) {

	struct GAKUSEI man1, man2;

	man1.age = 22;
	man1.weight = 65.9;
	man1.height = 173.5;

	man2.age = man1.age;
	man2.weight = man1.weight * 1.1;
	man2.height = man1.height;

	printf("man1��age��%d�ł��B\n",man1.age);
	printf("man1��weight��%lf�ł��B\n",man1.weight);
	printf("man1��height��%lf�ł��B\n",man1.height);

	printf("\n");

	printf("man2��age��%d�ł��B\n",man2.age);
	printf("man2��weight��%lf�ł��B\n",man2.weight);
	printf("man2��height��%lf�ł��B\n",man2.height);

	return 0;
}