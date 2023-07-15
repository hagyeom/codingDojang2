#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE* next;
	int data;
};

void addFirst(struct NODE* target, int data) // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
	struct NODE* newNode = malloc(sizeof(struct NODE)); // �� ��� ����
	newNode->next = target->next; // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
	newNode->data = data; // ������ ����

	target->next = newNode; // ���� ����� ���� ��忡 �� ��带 ����
}

int main()
{
	struct NODE* head = malloc(sizeof(struct NODE)); // �Ӹ� ��� ����

	head->next = NULL;

	addFirst(head, 10); // �Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 20); // �Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 30); // �Ӹ� ��� �ڿ� �� ��� �߰�

	struct NODE* curr = head->next; // ���� ����Ʈ ��ȸ�� �����Ϳ�
	// ù ��° ����� �ּ� ����

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	curr = head->next; // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	while (curr != NULL)
	{
		struct NODE* next = curr->next; // ���� ����� ���� ��� �ּҸ� �ӽ÷� ����
		free(curr); // ���� ��� �޸� ����
		curr = next; // �����Ϳ� ���� ����� �ּ� ����
	}

	free(head); // �Ӹ� ��� �޸� ����

	return 0;

}