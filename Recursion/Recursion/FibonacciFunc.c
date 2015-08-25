#include <stdio.h>

int Fibo(int n){

	if(n == 1)	return 0;
	else if(n == 2)	return 1;
	else	return Fibo(n-1) + Fibo(n-2);
	
}

int main(void){

	int i;
	for(i=1; i<15; i++){
		printf("Fibo(%d) : %d\n", i, Fibo(i));
	}

	return 0;
}