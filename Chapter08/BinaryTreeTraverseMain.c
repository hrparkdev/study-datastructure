#include <stdio.h>
#include "BinaryTree.h"

void PreorderTraverse(BTreeNode* bt) //전위 순회 함수
{
	if (bt == NULL)
		return;

	printf("%d \n", bt->data); //전위 순회이므로 루트 노드 먼저 방문!
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}

void InorderTraverse(BTreeNode* bt) //이진 트리 전체를 중위 순회하는 함수
{
	if (bt == NULL) //bt가 NULL이면 재귀 탈출!
		return;

	InorderTraverse(bt->left); //1단계 왼쪽 서브 트리의 순회
	printf("%d \n", bt->data); //2단계 루트 노드의 방문
	InorderTraverse(bt->right); //3단계 오른쪽 서브 트리의 순회
}

void PostorderTraverse(BTreeNode* bt) //후위 순회 함수
{
	if (bt == NULL)
		return;

	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	printf("%d \n", bt->data); //후위 순회이므로 루트 노드 나중 방문!
}

int main(void)
{
	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);

	InorderTraverse(bt1);
	return 0;
}