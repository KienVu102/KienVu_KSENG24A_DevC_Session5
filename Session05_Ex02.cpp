#include <stdio.h>

int main(){
	int number;
	while(1){
		printf("Hay nhap 1 so nguyen: ");
		scanf("%d", &number);
		if (number==10){
			printf("Ban doan dung roi !");
			goto end;
		}
		else{
			printf("Nhap lai\n");
		}
	}
	end:
	return 0;
}
