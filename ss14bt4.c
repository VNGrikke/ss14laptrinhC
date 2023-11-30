#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *arr[], char *arr3[]) {
        char temp = arr[1000];
        arr[1000] = arr3[1000];
        arr3[1000] = temp;
    }

int main(){
	int i;
	int size;
	char arr[1000];
	char arr2[1000];
	char arr3[1000];
	do{
		printf("		MENU\n");
		printf("1. nhap vao chuoi mang.\n");
		printf("2. in ra mang\n");
		printf("3. sao chep mang vao mang khac\n");
		printf("4. nhap vao mang khac doi cho 2 mang voi nhau\n");
		printf("5. dao nguoc mang\n");
		printf("6. nhap vao 1 ki tu tim ki tu do trong mang\n");
		printf("7. thoat\n");
		printf("lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				fflush(stdin);
				printf("nhap mang:");
				gets(arr);
			break;
			case 2:
				fflush(stdin);
				char *str = &arr;
				printf("in ra mang:");
				puts(str);
			break;
			case 3:
				fflush(stdin);
				*arr2 = &arr;
				printf("sao chep sang mang arr2:%s\n",arr2);
			break;
			case 4:
				fflush(stdin);
				printf("nhap vao mang thu 2:");
				gets(arr3);
				printf("truoc khi doi arr=%s, arr2=%s\n",arr,arr3);
				swap(&arr,&arr3);
				printf("sau khi doi arr = %s, arr2 = %s\n",*arr,*arr3);
//				puts(arr);
//				puts(arr2);
			break;
			case 5:
				
			break;
			case 6:
				
			break;
			case 7:
				exit(0);
			break;
			
		}
	}while(0==0);
}

