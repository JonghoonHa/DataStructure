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
//	// 네 개의 data 저장
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
//	// 저장된 data의 출력
//	printf("현재 data의 수 : %d\n", LCount(&list));
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
//	// xpos가 2인 data 모두 삭제
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
//	// 삭제 후 남은 data 전체 출력
//
//	printf("삭제 후 남은 data 수 : %d\n", LCount(&list));
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