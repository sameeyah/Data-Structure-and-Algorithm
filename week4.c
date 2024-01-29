#include <stdio.h>

struct TLIST {
	int data;
	struct TLIST *next;
};

int main(void) {

	struct TLIST x1, x2, x3, x4, x5;
	struct TLIST *head, *p;

	x1.data = 10;
	x2.data = 20;
	x3.data = 30;
	x4.data = 40;
	x5.data = 50;

	head = &x1;
	x1.next = &x2;
	x2.next = &x3;
	x3.next = &x4;
	x4.next = NULL;

	p = head;

	while (p != NULL){
		printf("%d \n", p->data);
		p = p->next;
	}

	printf("\n");
	
	x1.next = &x3;
	x2.next = NULL;
	p = head;

	while (p != NULL) {
		
		printf("%d \n", p->data);
		p = p->next;
	}

	printf("\n");

	x3.next = &x5;
	x5.next = &x4;
	p = head;

	while (p != NULL) {

		printf("%d \n", p->data);
		p = p->next;
	}

	return 0;
}