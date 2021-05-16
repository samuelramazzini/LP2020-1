#include <iostream>


int main() {
	
	int vetor[10], i;
	
	for(i=0;i<10;i++){
		scanf("%i",&vetor[i]);
	
		 printf ("vetor[%d] = %d\n", i, vetor[i]);	
	
	}
	
	for(i=9;i>=0;i--){
		printf("%i ",vetor[i]);	
	
	}
	return 0;
}
