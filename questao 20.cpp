#include <iostream>


int main() {
	
	int vetor[10];
	int i,x,y,z;
	
	for(i=0;i<10;i++){
		printf("Digite o numero %d do vetor\n",i); 
		scanf("%i",&vetor[i]);
		
		}
		for(x=0;x<10;x++){
			for(y=x;y<10;y++){
				if(vetor[x]>vetor[y]){
					z=vetor[x];
					vetor[x]=vetor[y];
					vetor[y]=z;
				}
			}
		}	

	for(i=0;i<10;i++){
		printf(" %d ",vetor[i]);
		
	}
	printf("\n");
	for(i=9;i>=0;i--){
		printf(" %d ",vetor[i]);
		
	}
	return 0;
}
