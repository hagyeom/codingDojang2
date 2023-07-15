#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE* next;
	int data;
};

void addFirst(struct NODE* target, int data)
{
	struct NODE* newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next; // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	newNode->data = data; // 데이터 저장

	target->next = newNode; // 기준 노드의 다음 노드에 새 노드를 지정
}

void removeFirst(struct NODE* target) // 기준 노드의 다음 노드를 삭제하는 함수
{
	struct NODE* removeNode = target->next; // 기준 노드의 다음 노드 주소를 저장
	target->next = removeNode->next; // 기준 노드의 다음 노드에
	// 삭제할 노드의 다음 노드를 지정

	free(removeNode); // 노드 메모리 해제
}

int main()
{
	struct NODE* head = malloc(sizeof(struct NODE));

	head->next = NULL;

	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);

	removeFirst(head);

	struct NODE* curr = head->next;

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	curr = head->next;
	while (curr != NULL)
	{
		struct NODE* next = curr->next;
		free(curr);
		curr->next;
	}

	free(head);

	return 0;
}