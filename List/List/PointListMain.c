#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
//
//int main(void){
//
//	List list;
//	Point compPos;
//	Point * ppos;
//
//	ListInit(&list);
//
//	// �� ���� data ����
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 2, 1);
//	LInsert(&list, ppos);
//
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 2, 2);
//	LInsert(&list, ppos);
//
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 3, 1);
//	LInsert(&list, ppos);
//
//	ppos = (Point*)malloc(sizeof(Point));
//	SetPointPos(ppos, 3, 2);
//	LInsert(&list, ppos);
//
//	// ����� data�� ���
//	printf("���� data�� �� : %d\n", LCount(&list));
//
//	if(LFirst(&list, &ppos)){
//
//		ShowPointPos(ppos);
//
//		while(LNext(&list, &ppos)){
//			ShowPointPos(ppos);
//		}
//	}
//
//	printf("\n");
//
//	// xpos�� 2�� data ��� ����
//
//	compPos.xpos = 2;
//	compPos.ypos = 0;
//
//	if(LFirst(&list, &ppos)){
//
//
//		if(PointComp(ppos, &compPos) == 1){
//		
//			ppos=LRemove(&list);
//			free(ppos);
//		}
//
//		while(LNext(&list, &ppos)){
//			if(PointComp(ppos, &compPos) == 1){
//				ppos = LRemove(&list);
//				free(ppos);
//			}
//		}
//	}
//
//	// ���� �� ���� data ��ü ���
//
//	printf("���� �� ���� data �� : %d\n", LCount(&list));
//
//	if(LFirst(&list, &ppos)){
//		ShowPointPos(ppos);
//
//		while(LNext(&list, &ppos)){
//			ShowPointPos(ppos);
//		}
//	}
//
//	printf("\n");
//
//	return 0;
//}