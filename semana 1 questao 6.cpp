#include <stdio.h>


int main() {
	int num;
	printf("Digite o valor de um numero de 0 a 9\n");
	scanf("%i",&num);
	switch(	num){
		case 0:printf("zero\n");
			break;
		case 1:printf("one\n");
			break;
		case 2:printf("two\n");
			break;
		case 3:printf("three\n");
			break;
		case 4:printf("four\n");
			break;
		case 5:printf("five\n");
			break;
		case 6:printf("six\n");
			break;
		case 7:printf("seven\n");
			break;
		case 8:printf("eight\n");
			break;
		case 9:printf("nine\n");
			break;
		default: printf("nao e um numero solicitado");
	}
	
	return 0;
}
