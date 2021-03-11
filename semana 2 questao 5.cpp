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
