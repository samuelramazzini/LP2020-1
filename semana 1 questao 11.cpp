#include <stdio.h>



int main() {
	
	int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,par,impar,soma;
	
	printf("digite o codigo de barra\n");
	scanf("%i%i%i%i%i%i%i%i%i%i%i%i%i",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);
	
	impar=n1+n3+n5+n7+n9+n11;
	impar=impar*3;
	par=n2+n4+n6+n8+n10+n12;
	soma=impar+par;
	soma+n0=soma
	
	if(soma%10==0){
		printf("S");
	}else{
		printf("N");
	}
	
	
	return 0;
}
