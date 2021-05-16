#include <stdio.h>

main()
{
 int lin,col,i;
 int mat[8][8];
 char c,t,d,s,l;
 
 printf("digite o tamanho da matriz e qual matriz foi solicitada\n");
 scanf("%i %c",&i,&c);
 
 
if(c=='t'){

 for(lin=0;lin<i;lin++){
 	for(col=0;col<i;col++){
 		if((lin+col)%2==0){
 			printf("1");
		 }else{
		 	printf("0");
		 }
 				
		 }

	printf("\n");
}

}
	if(c=='d'){
	 for(lin=0;lin<i;lin++){
 	for(col=0;col<i;col++){
 		if(lin>col){
 			printf("0");
		 }else{
		 	if(col>lin){
			 
		 		printf("0");
		 }else{
		 	if(lin=col){
		 		printf("1");
			 }
		 }
		 }
	 }
		
			printf("\n");
	}
	
	}
if(c=='s'){
	 for(lin=0;lin<i;lin++){
 	for(col=0;col<i;col++){
 		if(lin>col){
 			printf("0");
		 }else{
		 	if(col>lin){
			 
		 		printf("1");
		 }else{
		 	if(lin=col){
		 		printf("1");
			 }
		 }
		 }
	 }
		
			printf("\n");
	}
	
	}
if(c=='l'){
	 for(lin=0;lin<i;lin++){
 	for(col=0;col<i;col++){
 		if(lin>col){
 			printf("1");
		 }else{
		 	if(col>lin){
			 
		 		printf("0");
		 }else{
		 	if(lin=col){
		 		printf("1");
			 }
		 }
		 }
	 }
		
			printf("\n");
	}
	
	}


return 0;


}
