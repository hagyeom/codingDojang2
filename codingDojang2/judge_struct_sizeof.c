#include <stdio.h>

struct EncryptionHeader {
	char flags;
	char offset;
	short seq;
	int options;
	int ack;
};

int main() {
	struct EncryptionHeader header;

	printf("%d\n", sizeof(header));

	return 0;
}