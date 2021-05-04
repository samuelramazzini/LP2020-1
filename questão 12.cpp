#include <iostream>


int main() {
	
	int x,lim;
	
	
	scanf("%i",&lim);
	
	while(lim>100 || lim<=0){
		printf("valor invalido digite novamente\n");
		scanf("%i",&lim);
	}
	for(x=1;x<=lim;x++){
		if(x%4==0){
			printf("PIN,");
			continue;
		}
		printf("%i,",x);
	}
	
	return 0;
}
