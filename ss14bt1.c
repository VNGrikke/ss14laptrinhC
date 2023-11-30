#include<stdio.h>

int main(){
	int x = 15;
	int *pointer1 = &x;
	
	printf("1. %d %d\n", x, pointer1);
	printf("2. %d %d", *pointer1, &x);
}
