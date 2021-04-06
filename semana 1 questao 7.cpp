#include <stdio.h>



int main() {
	
	int valor,notas;
	
	printf("o valor final da compra e?\n");
	scanf("%d",&valor);
	
	
	notas=valor/100;
		printf("%d notas de R$100\n",notas);
	valor=valor%100;
	notas=valor/50;
		printf("%d notas de R$50\n",notas);
	valor=valor%50;
	notas=valor/20;
		printf("%d notas de R$20\n",notas);
	valor=valor%20;
	notas=valor/10;
		printf("%d notas de R$10\n",notas);
	valor=valor%10;
	notas=valor/5;
		printf("%d notas de R$5\n",notas);
	valor=valor%5;
	notas=valor/2;
		printf("%d notas de R$2\n",notas);
	valor=valor%2;
	notas=valor/1;
		printf("%d notas de R$1\n",notas);
	
	return 0;
}
