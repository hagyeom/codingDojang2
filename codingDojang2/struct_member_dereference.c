#include <stdio.h>
#include <stdlib.h>

struct Data {
	char c1;
	int* numPtr;
};

int main() {
	int num1 = 10;
	struct Data d1;
	struct Data* d2 = malloc(sizeof(struct Data));

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);
	printf("%d\n", *d2->numPtr);

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1); // a: 구조체 포인터를 역참조하여 c1에 접근
	// d2->c1과 같음
	printf("%d\n", *(*d2).numPtr); // 10: 구조체 포인터를 역참조하여 numPtr에 접근한 뒤
	// 다시 역참조
	// *d2->numPtr과 같음

	free(d2);

	return 0;

}