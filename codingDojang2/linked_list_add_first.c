#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE* next;
	int data;
};

void addFirst(struct NODE* target, int data) // 기준 노드 뒤에 노드를 추가하는 함수
{
	struct NODE* newNode = malloc(sizeof(struct NODE)); // 새 노드 생성
	newNode->next = target->next; // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	newNode->data = data; // 데이터 저장

	target->next = newNode; // 기준 노드의 다음 노드에 새 노드를 지정
}

int main()
{
	struct NODE* head = malloc(sizeof(struct NODE)); // 머리 노드 생성

	head->next = NULL;

	addFirst(head, 10); // 머리 노드 뒤에 새 노드 추가
	addFirst(head, 20); // 머리 노드 뒤에 새 노드 추가
	addFirst(head, 30); // 머리 노드 뒤에 새 노드 추가

	struct NODE* curr = head->next; // 연결 리스트 순회용 포인터에
	// 첫 번째 노드의 주소 저장

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	curr = head->next; // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	while (curr != NULL)
	{
		struct NODE* next = curr->next; // 현재 노드의 다음 노드 주소를 임시로 저장
		free(curr); // 현재 노드 메모리 해제
		curr = next; // 포인터에 다음 노드의 주소 저장
	}

	free(head); // 머리 노드 메모리 해제

	return 0;

}