#include <stdio.h>

void move(int num, char from, char by, char to){

	if(num != 1)
		move(num-1, from, to, by);

	printf("%d �� %c ���� %c �� �̵�.\n", num, from, to);

	if(num != 1)
		move(num-1, by, from, to);
}

int main(void){

	move(3, 'A', 'B', 'C');

	return 0;
}