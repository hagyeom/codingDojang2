#include <stdio.h>

#pragma pack(push,1) // 1바이트 크기로 정렬
struct PacketHeader {
	char flags;
	int seq;
};
#pragma pack(pop) // 정렬 설정을 이전 상태(기본값)로 되돌림

int main() {
	struct PacketHeader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));

	return 0;
}