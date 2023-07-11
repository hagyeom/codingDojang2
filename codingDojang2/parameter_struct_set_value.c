#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person p) // 반환값 없음, 구조체 매개변수 한 개 지정
{
	// 매개변수로 받은 구조체 멤버의 값 변경
	strcpy(p.name, "고길동");
	p.age = 40;
	strcpy(p.address, "서울시 서초구 반포동");
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	setPerson(p1);

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}