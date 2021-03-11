#include <iostream>


int main() {
	float valor;
	printf("qual o valor da compra no final\n");
	scanf("%f",&valor);
	
	if(valor<100){
		printf("o valor final e  R$%f\n",valor);
	}else{
		if(valor>100 && valor<=200){
			valor=valor*0.95;
				printf("o valor final e R$%f\n",valor);
		}else{
			if(valor>200){
				valor=valor*0.90;
				printf("o valor final e R$%f",valor);
			}
		}
	}
	
	return 0;
}
