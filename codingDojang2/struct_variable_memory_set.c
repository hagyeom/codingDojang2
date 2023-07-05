#include <stdio.h>
#include <string.h>

struct Point2D {
	int x;
	int y;
};

int main() {
	struct Point2D p1;

	memset(&p1, 0, sizeof(struct Point2D)); // p1을 구조체 크기만큼 0으로 설정

	printf("%d %d\n", p1.x, p1.y);

	return 0;
}