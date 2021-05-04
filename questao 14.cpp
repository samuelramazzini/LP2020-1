#include <iostream>


int main() {
	
	int andar=0,y=0;
	
		
	while(andar>=0){
		
		printf("Digite o andar desejado\n");
		scanf("%i",&andar);
		
		if(andar==0){
			printf("-\n");
				y=andar;
		}
		if(andar<y && andar!=-1){
			printf("B\n");
				y=andar;
		}
		
		if(andar>y){
			printf("C \n");
				y=andar;
		}
	
		
	}
		
	


	return 0;
}
