#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	int funcNumber; // 함수 번호
	int num1, num2;
	int(*fp)(int, int) = NULL; // int형 반환값, int형 매개변수 두 개가 있는
	// 함수 포인터 선언

	printf("함수 번호와 계산할 값을 입력하세요: ");
	scanf("%d %d %d", &funcNumber, &num1, &num2); // 함수 번호와 계산할 값을 입력받음

	switch (funcNumber) // 함수 번호에 따라 함수 포인터 설정
	{
	case 0: // 0이면
		fp = add;
		break;
	case 1:
		fp = sub;
		break;
	case 2:
		fp = mul;
		break;
	case 3:
		fp = div;
		break;
	}

	printf("%d\n", fp(num1, num2));

	return 0;
}