#include <stdio.h>

int main(){
	int a, b;
	printf("Hay nhap 2 so nguyen a va b: ");
	scanf("%d %d", &a, &b);
	int min = a<b ? a:b ;
	for (int i = min; i>=1; i--){
		if((a%i==0) && (b%i==0)){
			printf("UCLN cua %d va %d la %d\n", a, b, i);
			break;
		}
	}
	
	return 0;
}
