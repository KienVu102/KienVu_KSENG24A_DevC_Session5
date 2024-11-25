#include <stdio.h>

int main(){
	float a, b, result;
	int choose;
	printf("Moi ban nhap 2 so bat ki: ");
	scanf("%f %f", &a, &b);
	printf("Calculator\n");
	printf("1. Tong 2 so\n");
	printf("2. Hieu 2 so\n");
	printf("3. Tich 2 so\n");
	printf("4. Thuong 2 so\n");
	printf("5. Thoat\n");
	printf("Lua chon cua ban: ");
	while (1){
		scanf("%d", &choose);
		if(choose == 1){
			result=a+b;
			printf("Tong cua 2 so vua nhap la %.3f", result);
		}
		if(choose == 2){
			result=a-b;
			printf("Hieu cua 2 so vua nhap la %.3f", result);
		}
		if(choose == 3){
			result=a*b;
			printf("Tich cua 2 so vua nhap la %.3f", result);
		}
		if(choose == 4){
			result=a/b;
			printf("Thuong cua 2 so vua nhap la %.3f", result);
		}
		if(choose == 5){
			printf("Thoat");
		}
	}
	return 0;
}
