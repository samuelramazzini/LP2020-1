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
