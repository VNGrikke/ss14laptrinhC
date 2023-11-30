#include<stdio.h>
void swap(int *a, int *b){
	//int *a = &number1;
	//int *b = &number2;
	int temp = *a;
	*a = *b;
	*b = temp;	
	}
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("truoc=%d\n",x-y);
	swap(&x,&y);
	printf("sau=%d",x-y);
}

