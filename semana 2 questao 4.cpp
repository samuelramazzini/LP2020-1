#include <iostream>


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
