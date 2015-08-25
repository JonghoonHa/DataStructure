#include"NameCard.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

// NameCard ����ü ������ ���� �Ҵ� �� �ʱ�ȭ �� �ּҰ� ��ȯ
NameCard * MakeNameCard(char* name, char * phone){

	NameCard * card = (NameCard *)malloc(sizeof(NameCard));

	strcpy(card->name, name);
	strcpy(card->phone, phone);

	return card;
}

// NameCard ����ü ������ ���� ���
void ShowNameCardInfo(NameCard * pcard){

	printf("[�̸� : %s, ��ȭ��ȣ : %s]\n", pcard->name, pcard->phone);

}

// �̸��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
int NameCompare(NameCard * pcard, char * name){

	return strcmp(pcard->name, name);

}

// ��ȭ��ȣ ������ ����
void ChangePhoneNum(NameCard * pcard, char * phone){

	strcpy(pcard->phone, phone);

}