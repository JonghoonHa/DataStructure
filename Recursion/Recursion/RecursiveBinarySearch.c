#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target){

	int idx;
	if(first > last)	return -1; // Ž�� ���� ����

	idx = (last+first)/2;

	if(target < ar[idx])	return BSearchRecur(ar, first, idx-1, target);
	else if(target > ar[idx])	return BSearchRecur(ar, idx+1, last, target);
	else return idx;
}

int search(int target){

	int arr[] = {1, 3, 5, 7, 9};
	int idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, target);

	if(idx == -1)	printf("Ž�� ����\n");
	else	printf("Ÿ�� ���� �ε��� : %d\n", idx);

	return 0;
}

int main(void){

	int idx;

	search(7); // case1 : 7 ã��	
	search(4); // case2 : 4 ã��
	
	return 0;
}