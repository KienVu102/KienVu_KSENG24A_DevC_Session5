#include <stdio.h>

int main(){
	int a, sum=0;
	printf("Hay nhap day so ban muon: ");
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		printf("%d\n", i);
		sum += i;
	}
    printf("Tong chu so la %d", tong);
	return 0;
}
