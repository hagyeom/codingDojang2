#include <stdio.h>
#include <stdlib.h>

int main() {
	int* numPtr = malloc(sizeof(int));
	char* cPtr;

	*numPtr = 0x12345678;

	cPtr = (char*)numPtr;

	printf("0x%x\n", *cPtr);

	free(numPtr);

	return 0;
}