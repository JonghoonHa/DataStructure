#include<stdio.h>
#include<stdlib.h>
#include"NameCard.h"
#include"ArrayList.h"

int main(){

	List list;
	NameCard * pCard;

	ListInit(&list);

	// 1
	pCard = MakeNameCard("������", "010-3897-0392");
	LInsert(&list, pCard);

	pCard = MakeNameCard("������", "010-4016-0518");
	LInsert(&list, pCard);

	pCard = MakeNameCard("�Ͽ���", "010-6332-0932");
	LInsert(&list, pCard);

	printf("���� �������� �� : %d\n", LCount(&list));

	// 2
	if(LFirst(&list, &pCard)){

		if(!NameCompare(pCard, "������")){
			ShowNameCardInfo(pCard);
		}else{		

			while(LNext(&list, &pCard)){
				if(!NameCompare(pCard, "������")){
					ShowNameCardInfo(pCard);
					break;
				}
			}
		}
	}

	printf("\n");

	// 3

	if(LFirst(&list, &pCard)){

		if(!NameCompare(pCard, "������")){
			ChangePhoneNum(pCard, "010-0000-1111");
		}else{		

			while(LNext(&list, &pCard)){
				if(!NameCompare(pCard, "������"))	
					ChangePhoneNum(pCard, "010-0000-1111");
			}
		}
	}

	// 4

	if(LFirst(&list, &pCard)){

		if(!NameCompare(pCard, "�Ͽ���")){
			pCard = LRemove(&list);
			free(pCard);
		}else{		

			while(LNext(&list, &pCard)){
				if(!NameCompare(pCard, "�Ͽ���")){
					pCard = LRemove(&list);
					free(pCard);
				}
			}
		}
	}

	// 5

	if(LFirst(&list, &pCard)){

		ShowNameCardInfo(pCard);	

		while(LNext(&list, &pCard)){
			ShowNameCardInfo(pCard);
		}
		
	}

	return 0;
}