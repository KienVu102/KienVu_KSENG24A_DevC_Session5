#include <stdio.h>

int main(){
	int number, mul=1;
	printf("Hay nhap 1 so nguyen duong tu 1 den 10 ma ban muon: ");
	scanf("%d", &number);
    printf("Bang cuu chuong cua %d la: \n", number);
    for (int i=1; i<=10; i++){
		mul= number*i;
		printf("%d\n", mul);
	}
	printf("\n");
	
	return 0;
}
