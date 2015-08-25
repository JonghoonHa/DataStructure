#include<stdio.h>
#include<stdlib.h>
#include"NameCard.h"
#include"ArrayList.h"

int main(){

	List list;
	NameCard * pCard;

	ListInit(&list);

	// 1
	pCard = MakeNameCard("하종훈", "010-3897-0392");
	LInsert(&list, pCard);

	pCard = MakeNameCard("김지우", "010-4016-0518");
	LInsert(&list, pCard);

	pCard = MakeNameCard("하예진", "010-6332-0932");
	LInsert(&list, pCard);

	printf("현재 데이터의 수 : %d\n", LCount(&list));

	// 2
	if(LFirst(&list, &pCard)){

		if(!NameCompare(pCard, "김지우")){
			ShowNameCardInfo(pCard);
		}else{		

			while(LNext(&list, &pCard)){
				if(!NameCompare(pCard, "김지우")){
					ShowNameCardInfo(pCard);
					break;
				}
			}
		}
	}

	printf("\n");

	// 3

	if(LFirst(&list, &pCard)){

		if(!NameCompare(pCard, "김지우")){
			ChangePhoneNum(pCard, "010-0000-1111");
		}else{		

			while(LNext(&list, &pCard)){
				if(!NameCompare(pCard, "김지우"))	
					ChangePhoneNum(pCard, "010-0000-1111");
			}
		}
	}

	// 4

	if(LFirst(&list, &pCard)){

		if(!NameCompare(pCard, "하예진")){
			pCard = LRemove(&list);
			free(pCard);
		}else{		

			while(LNext(&list, &pCard)){
				if(!NameCompare(pCard, "하예진")){
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