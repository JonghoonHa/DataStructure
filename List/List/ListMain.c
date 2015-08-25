#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"

//int main(void){
//	//ArrayList의 생성 및 초기화
//	List list;
//	int data;
//	ListInit(&list);
//
//	//5개의 data 저장
//	LInsert(&list, 11);
//	LInsert(&list, 11);
//	LInsert(&list, 22);
//	LInsert(&list, 22);
//	LInsert(&list, 33);
//
//	//저장된 data의 전체 출력
//	printf("현재 data의 수: %d \n", LCount(&list));
//
//	if(LFirst(&list, &data)){
//		printf("%d ", data);
//
//		while(LNext(&list, &data)){
//			printf("%d ", data);
//		}
//	}
//	printf("\n\n");
//
//	//숫자 22를 탐색하여 모두 삭제
//	if(LFirst(&list, &data)){
//		if(data == 22){
//			LRemove(&list);
//		}
//
//		while(LNext(&list, &data)){
//			if(data == 22){
//				LRemove(&list);
//			}
//		}
//	}
//
//	//삭제 후 남은 data 전체 출력
//	printf("현재 남은 data의 수 : %d \n", LCount(&list));
//
//	if(LFirst(&list, &data)){
//		printf("%d ", data);
//
//		while(LNext(&list, &data)){
//			printf("%d ", data);
//		}
//	}
//	printf("\n\n");
//	return 0;
//}
