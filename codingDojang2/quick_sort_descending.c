#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) // �������� �� �Լ� ����
{
	int num1 = *(int*)a; // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b; // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 > num2) // a�� b���� Ŭ ����
		return -1; // -1 ��ȯ

	if (num1 < num2) // a�� b���� ���� ����
		return 1; // 1 ��ȯ

	return 0; // a�� b�� ���� ���� 0 ��ȯ
}

int main()
{
	int numArr[10] = { 8,4,2,5,3,7,10,1,6,9 };

	// ������ �迭, ��� ����, ��� ũ��, �� �Լ��� �־���
	qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numArr[i]);
	}

	printf("\n");

	return 0;
}