#include <stdio.h>

void move(int num, char from, char by, char to){

	if(num != 1)
		move(num-1, from, to, by);

	printf("%d 를 %c 에서 %c 로 이동.\n", num, from, to);

	if(num != 1)
		move(num-1, by, from, to);
}

int main(void){

	move(3, 'A', 'B', 'C');

	return 0;
}