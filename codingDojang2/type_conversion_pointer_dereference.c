#include <stdio.h>
#include <stdlib.h>

int main() {
	int* numPtr = malloc(sizeof(int));
	char* cPtr;

	*numPtr = 0x12345678;
	printf("0x%x\n", *(char*)numPtr);

	free(numPtr);

	return 0;
}