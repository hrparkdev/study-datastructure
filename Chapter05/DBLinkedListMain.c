#include <stdio.h>
#include "DBLinkedLIst.h"

int main(void)
{
	//양방형 연결 리스트의 생성 및 초기화 ///////
	List list;
	int data;
	ListInit(&list);

	//8개의 데이터 저장 ///////
	ListInsert(&list, 1); ListInsert(&list, 2);
	ListInsert(&list, 3); ListInsert(&list, 4);
	ListInsert(&list, 5); ListInsert(&list, 6);
	ListInsert(&list, 7); ListInsert(&list, 8);

	//저장된 데이터의 조회 ///////
	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		//오른쪽 노드로 이동하며 데이터 조회
		while (LNext(&list, &data))
			printf("%d ", data);

		//왼쪽 노드로 이동하며 데이터 조회
		while (LPrevious(&list, &data))
			printf("%d ", data);

		printf("\n\n");
	}

	return 0;
}