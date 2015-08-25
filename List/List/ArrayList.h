#ifndef __ARRAY_LIST_H_
#define __ARRAY_LIST_H_

#include "Point.h"
#include "NameCard.h"

#define TRUE 1 // 참
#define FALSE 0 // 거짓

#define LIST_LEN 100
//typedef Point * LData; // LData에 대한 typedef선언
typedef NameCard * LData; // LData에 대한 typedef선언

typedef struct __ArrayList{
	
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;

} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif
