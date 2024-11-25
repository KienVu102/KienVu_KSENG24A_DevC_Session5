#include <stdio.h>

int main(){
	int number=1, mul=1;
	for(int a=1; a<10; a++){
		printf("Bang cuu chuong cua %d la: \n", number);
		for(int b=1; b<=10; b++){
			mul = a*b;
		    printf("%d\n", mul);
		}
		printf("\n");
	    number += 1;
	}
	return 0;
}
