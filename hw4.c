#include <stdio.h>
#define NUM 100

int stack[NUM];
int top = 0;

void push(int data);
int pop(void);
void print_stack(void);

int main(void) {
	int x;

	print_stack();
	printf("\n");

	printf("push 100\n");
	push(100);
	printf("push 200\n");
	push(200);
	print_stack();
	printf("\n");

	printf("pop\n");
	x = pop();
	printf("取り出されたデータ = %d\n", x);
	print_stack();
	printf("\n");

	printf("push 300\n");
	push(300);
	print_stack();
	printf("\n");

	printf("pop\n");
	x = pop();
	printf("取り出されたデータ = %d\n", x);
	printf("pop\n");
	x = pop();
	printf("取り出されたデータ = %d\n", x);
	print_stack();
	printf("\n");

	return 0;
}

void push(int data) {
	stack[top] = data;
	top++;
}

int pop(void) {
	if (top > 0) {
		top--;
		return stack[top];
	}
	else {
		return -1;
	}
}

void print_stack(void) {
	int n;

	printf("stack: [");

	for (n = 0; n < top; n++) {
		printf("%d", stack[n]);
	}

	printf("]\n");
}