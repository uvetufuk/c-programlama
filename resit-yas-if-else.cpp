#include<stdio.h>
#include<conio.h>

int main() {
	int yas;
	
	printf("Lutfen yasinizi girin");
	scanf("%d", &yas);
	
	if(yas > 18) {
		printf("Resitsiniz");
	} 
	else {
		printf("Resit degilsiniz");
	}
}
