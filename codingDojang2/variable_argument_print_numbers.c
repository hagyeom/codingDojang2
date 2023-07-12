#include <stdio.h>
#include <stdarg.h>

void printNumbers(int args, ...) // ���� ������ ������ ����, ...���� ���� ���� ����
{
	va_list ap; // ���� ���� ��� ������

	va_start(ap, args); // ���� ���� ��� ������ ����
	for (int i = 0; i < args; i++) // ���� ���� ������ŭ �ݺ�
	{
		int num = va_arg(ap,int); // int ũ�⸸ŭ �������� ��� �����Ϳ��� ���� ������
		// ap�� int ũ�⸸ŭ ���������� �̵�

		printf("%d ", num); // ���� ���� �� ���
	}
	va_end(ap); // ���� ���� ��� �����͸� NULL�� �ʱ�ȭ

	printf("\n");
}

int main()
{
	printNumbers(1, 10); // �μ� ���� 1��
	printNumbers(2, 10, 20); // �μ� ���� 2��
	printNumbers(3, 10, 20, 30); // �μ� ���� 3��
	printNumbers(4, 10, 20, 30, 40); // �μ� ���� 4��

	return 0;
}