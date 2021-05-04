#include <iostream>


int main() {
	int x,temperatura;
	
	while(temperatura>=0){
		scanf("%i",&temperatura);
		
		if(temperatura>x){
			x=temperatura;
		}
		
	}
	if(x>=1000){
		printf("deu ruim");
	}else{
		printf("tudo tranquilo");
	}
	return 0;
}
