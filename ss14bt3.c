#include<stdio.h>
#include<string.h>

int size(char *chuoi[]) {
    int dem = 0;
    char *ptr = chuoi;

    while (*ptr != '\0') {
        dem++;
        ptr++;
     }
    return dem;
}

int main(){
	char str1[1000];
	char str2[1000];
	
	printf ("nhap vao xau 1:");
	gets(str1);
	printf ("nhap vao xau 2:");
	gets(str2);
	
	int size1 = size(str1);
	int size2 = size(str2);
	printf("do dai xau 1 = %d\n", size1);
	printf("do dai xau 2 = %d\n", size2);
	
	if( size1 > size2 ){
		puts(str1);
	}else if( size2 > size1 ){
		puts(str2);
	}else{
		printf("2 xau bang nhau:]]");
	}
	
	
	return 0;
}
