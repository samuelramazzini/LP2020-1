# LP2020-1
Exercícios da cadeira de Lógica de Programação - Professor Calebe Conceição - TSI - IFSUL Charqueadas

exercicio 0/*
#include <stdio.h>

main(){
	int a, b;
	printf("valor para a e b \n");
	 scanf("%i",&a);
	 scanf("%i",&b);
	 
	 if(a<b){
	 	printf("%i e %i",a,b);
	 }else{
	 	if(a>b){
	 		printf("%i e %i",b,a);
		 }
	 }
	 
return 0;
	
	}
  /*
  
  
  
  semana 1 questao 1
  /*#include <iostream>
  
  
  


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
 
 
 
 exercicio 2 semana 1
/*
#include <iostream>

int main() {
	
	int a,b;
	printf("valor do numero a\n");
	scanf("%i",&a);
	printf("valor do numero b\n");
	scanf("%i",&b);
		printf("%i %i %i ",a-1,a,a+1);
		printf("%i %i %i\n",b-1,b,b+1);		
	
	return 0;
}
/*
exercicio 3 semana 2
#include <stdio.h>


int main() {
	
	int a,b,c;
		printf("quais os valor de a\n");
		scanf("%i",&a);
		printf("quais os valor de b\n");
		scanf("%i",&b);
		printf("quais os valor de c\n");
		scanf("%i",&c);
		
		if(a>=b+c || b>=a+c || c>=a+b){
			printf("nao forma");
			
		}else 
			if(a==b && a==c && b==c){
			printf("triangulo equilatero");
		}else{
			if(a==b || a==c || b==c){
				printf("triangulo isoceles");
			}else{
		
			if(a != b && a!=c && b!=c){
				printf("triangulo escaleno");
			}
		}
	}
	
	return 0;
}

/*


exercicio 4 semana 2#include <iostream>


int main() {
	
	int a,b,c;
	printf("qual o valor de a\n");
	scanf("%i",&a);
	printf("qual o valor de b\n");
	scanf("%i",&b);
	printf("qual o valor de c\n");
	scanf("%i",&c);
		if(a==1 && b==1 || a==1 && c==1 || b==1 && c==1){
			printf("aprovado com A");
		}else{
			if(a==2 && b==2 || a==2 && c==2 || b==2 && c==2){
			printf("aprovado com B");
		}else{
			if(a==3 && b==3 || a==3 && c==3 || b==3 && c==3){
				printf("aprovado com C");
		}else{
			if(a==4 && b==4 || a==4 && c==4 || b==4 && c==4){
				printf("REPROVADO");
			}else{
				printf("inclocusivo");
			}
		}
			}	
		}
		
		
	return 0;
}
/*

#include<stdio.h>



main(){
	
	int a;
	int b;
	
	printf("Digite o valor a: \n");
	scanf("%i", &a);
	
	printf("Digite o valor b: \n");
	scanf("%i", &b);
	
	if(a+2==b || a-2==b){
		printf("%i %i %i %i %i", a-1, a, a+1, b, b+1);

	}else if(a+1==b || a-1==b){
		printf("%i %i %i %i", a-1, a, b, b+1);

	}else if(a==b){
		printf("%i %i %i", a-1, a, a+1);

	}else{
		printf("%i %i %i %i %i %i", a-1, a, a+1, b-1, b, b+1);
	}
	

	return 0;
}
/*
