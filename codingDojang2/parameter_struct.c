#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void printPerson(struct Person p) // 반환값 없음, 구조체 매개변수 한 개 지정
{
	// 구조체 매개변수 멤버의 값 출력
	printf("이름: %s\n", p.name);
	printf("나이: %d\n", p.age);
	printf("주소: %s\n", p.address);
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	printPerson(p1); // 함수를 호출할 때 구조체 변수 전달, 멤버가 복사됨

	return 0;
}